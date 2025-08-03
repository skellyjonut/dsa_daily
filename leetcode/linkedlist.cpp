#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int data1){
        data = data1;
        next = nullptr;
    }
    Node(int data1, Node* pointr){
        data = data1;
        next = pointr;
    }
};

Node* head = nullptr;
Node* tail = nullptr;

void insert(int val){
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

Node* Convert(vector<int> &arr){
    Node* had = new Node(arr[0]);
    Node* temp = had;
    for(int i = 1 ;i < arr.size();i++){
        Node* newNode = new Node(arr[i]);
        temp->next = newNode;
        temp = newNode;
    }
    return had;
    
}
int lengthofLL(Node* l){
    int cnt = 0;
    Node* temp = l;
    while(temp!= nullptr){
        temp = temp->next;
        cnt++;
    }
    return cnt;
}

Node* removeHead(Node* head){
    if(head == NULL)return head;
    Node* temp = head;
    head = head->next;
    delete temp;
    return head;
}

Node* deletetail(Node* head){
    if(head == NULL || head->next == NULL)return head;
    Node* temp = head;
    while(temp->next->next != NULL){
        temp = temp -> next;
    }
    delete temp->next;
    temp->next = nullptr;
    return head;
}

Node* deletek(Node* head,int k){
    if(head == nullptr) return head; 
    Node* temp = head;
    Node* prev = nullptr;
    if(k==1){
        head = head->next;
        delete temp;
        return head;
    }
    int cnt = 0;
    while(temp!=nullptr){
        cnt++;
        if(cnt == k){
            prev -> next = prev->next->next;
            delete temp;
            break;
        }
        prev = temp;
        temp = temp-> next;

    }
    return head;

}

Node* deleteValue(Node* head,int k){
    if(head == nullptr) return head; 
    Node* temp = head;
    Node* prev = nullptr;
    if(k==temp->data){
        head = head->next;
        delete temp;
        return head;
    }
    while(temp!=nullptr){
        if(temp->data == k){
            prev -> next = prev->next->next;
            delete temp;
            break;
        }
        prev = temp;
        temp = temp-> next;

    }
    return head;

}

Node* insertHead(Node* head,int k){
    Node* temp = new Node(k,head);
    return temp;
}
Node* insertTail(Node* head,int k){
    if(head == nullptr){
        return new Node(k);
    }
    Node* temp = head;
    while(temp->next != nullptr){
        temp = temp->next;
    }
    Node* newNode = new Node(k);
    temp->next = newNode;
    return head;
}

Node* insertk(Node* head, int k, int val){
    if(head == nullptr){
        if(k == 1){
            return new Node(val);
        }
        else{
            return nullptr;
        }
    }
    if(k==1){
        Node* temp = head;
        Node* newNode = new Node(val,head);
        return newNode;
    }
    else{
        int cnt = 0;
        Node* temp = head;
        while(temp!= nullptr){
            cnt++;
            if(cnt == k-1){
                Node* newNode = new Node(val,temp -> next);
                temp->next = newNode;
                break;
            }
            temp = temp->next;
        }
        return head;
    }
    
}

int main(){
    int val;
    vector<int> arr = {1,2,30,4,5,6};
    Node* had = Convert(arr);
    //had = removeHead(had);
    //had = deletek(had,3);
    //had = deleteValue(had,2);
    //had = insertHead(had,100);
    //had = insertTail(had,999);
    had = insertk(had,3,969);
    cout << "length of LL is" << lengthofLL(had) << endl;
    while(had!= nullptr){ 
        cout << had->data << " ";
        had = had->next;
    }
    /*for(int i = 0; i < 5; i++){
        cout << "Enter value :";
        cin >> val;
        Node* newNode = new Node(val);
        newNode->next = nullptr;

        if(head == nullptr){
            head = newNode;
            tail = newNode;
        }
        else{
            tail->next = newNode;
            tail = newNode;
        }
    }
    Node* temp = head;
    while(temp != nullptr){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
    insert(100);
    temp = head;
    while(temp != nullptr){
        cout << temp->data << " ";
        temp = temp->next;
    }
    */
    return 0;
}