n = int(input())

children = list(range(1, n + 1))
pos = 1

while children:
    pos %= len(children)

    print(children[pos], end=" ")

    children.pop(pos)

    pos += 1