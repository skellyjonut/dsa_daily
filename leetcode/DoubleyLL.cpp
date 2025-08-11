#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node* back;

    Node(int data1,Node* next1,Node* back1){
        data = data1;
        next = next1;
        back = back1;
    }

    Node(int data1){
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};
Node* convertToArr(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* prev = head;

    for(int i = 1; i < arr.size();i++){
        Node* temp = new Node(arr[i],nullptr,prev);
        prev -> next = temp;
        prev = temp;
    }
    return head;
}
void print(Node* head){
    while(head != nullptr){
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}
Node* deleteHead(Node* head){
    if(head == nullptr || head->next == nullptr){
        return nullptr;
    }
    Node* prev = head;
    head = head -> next;
    head -> back = nullptr;
    prev->next = nullptr;
    delete prev;
    return head;
}
Node* deleteTail(Node* head){
    if(head == nullptr || head->next == nullptr){
        return nullptr;
    }
    Node* temp = head;
    while(temp->next != nullptr){
        temp = temp -> next;
    }
    Node* newTemp = temp -> back;
    newTemp->next = nullptr;
    temp -> back = nullptr;
    delete temp;
    return head;

}
Node* deleteK(Node* head,int k){
    int cnt = 0;
    Node* temp = head;
    while(temp!= nullptr){
        cnt++;
        if(cnt == k){
            break;
        }
        temp = temp -> next;
    }
    Node* prev = temp->back;
    Node* front = temp-> next;

    if(prev == nullptr && front == nullptr){
        delete temp;
        return nullptr;
    }
    else if(prev == nullptr){
        if(head == nullptr || head->next == nullptr){
            delete temp;
            return nullptr;
        }
        Node* prev = head;
        head = head-> next;
        prev->next = nullptr;
        head->back = nullptr;
        delete prev;
        return head;
    }
    else if(front == nullptr){
        if(head == nullptr || head->next == nullptr){
            delete temp;
            return nullptr;
        }
        Node* temp1 = head;
        while(temp1 ->next != nullptr){
            temp1 = temp1->next;
        }
        Node* newTail = temp1->back;
        newTail -> next = nullptr;
        temp1->back  = nullptr;
        delete temp1;
        return head;
    }
    else{
        prev->next = front;
        front->back = prev;
        temp-> back = nullptr;
        temp -> next = nullptr;
        delete temp;
        return head;
    }
}
Node* insertbeforHead(Node* head,int val){

    Node* newNode = new Node(val);;
    newNode -> next = head;
    head->back = newNode;
    head = newNode;
    return head;
}
Node* insertbeforeTail(Node* head,int val){
    Node* temp = head;
    while(temp->next != nullptr){
        temp = temp->next;
    }
    Node* prev = temp->back;
    Node* newNode = new Node(val,temp,prev);
    prev->next = newNode;
    temp ->back = newNode;

    return head;
}
Node* reverseLL(Node* head){
    Node* temp = head;
    Node* swap = nullptr;
    while( temp != nullptr){
        swap = temp->back;
        temp->back = temp->next;
        temp ->next = swap;
        temp = temp->back;
    }
    return swap->back;
}

int main(){

    vector<int> v = {1,2,3,4,5};
    Node* head = convertToArr(v);
    head = insertbeforHead(head,99);
    head = insertbeforeTail(head,100);
    //head =deleteK(head,3);
    //head = deleteHead(head);
    //head = deleteTail(head);
    print(head);
    head = reverseLL(head);
    print(head);

}