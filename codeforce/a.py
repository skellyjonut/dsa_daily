import urllib.request
from html.parser import HTMLParser

class DocTableParser(HTMLParser):
    def __init__(self):
        super().__init__()
        self.in_cell = False
        self.current_row = []
        self.rows = []
        
    def handle_starttag(self, tag, attrs):
        if tag == 'td':
            self.in_cell = True
            self.cell_data = ""

    def handle_endtag(self, tag):
        if tag == 'td':
            self.in_cell = False
            self.current_row.append(self.cell_data.strip())
        elif tag == 'tr':
            if self.current_row:
                self.rows.append(self.current_row)
                self.current_row = []

    def handle_data(self, data):
        if self.in_cell:
            self.cell_data += data

def decode_message(doc_url):
    try:
        req = urllib.request.Request(doc_url, headers={'User-Agent': 'Mozilla/5.0'})
        with urllib.request.urlopen(req) as response:
            html_content = response.read().decode('utf-8')
    except Exception:
        return

    parser = DocTableParser()
    parser.feed(html_content)
    
    if not parser.rows:
        return

    grid = {}
    widest_x = 0
    highest_y = 0

    for cells in parser.rows[1:]:
        if len(cells) >= 3:
            try:
                x_val = int(cells[0])
                letter = cells[1]
                y_val = int(cells[2])
                
                grid[(x_val, y_val)] = letter
                
                if x_val > widest_x: 
                    widest_x = x_val
                if y_val > highest_y: 
                    highest_y = y_val
            except ValueError:
                continue

    for y in range(highest_y, -1, -1):
        line = ""
        for x in range(widest_x + 1):
            line += grid.get((x, y), ' ')
        print(line)

target_url = "https://docs.google.com/document/d/e/2PACX-1vSvM5gDlNvt7npYHhp_XfsJvuntUhq184By5xO_pA4b_gCWeXb6dM6ZxwN8rE6S4ghUsCj2VKR21oEP/pub"
decode_message(target_url)