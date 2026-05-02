#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int val){
        data = val;
        next = prev = NULL;
    }
};

class Doubly_LL {
private:
    Node* head;
    Node* tail;
public:
    Doubly_LL(){
        head = tail = NULL;
    }
    
    void push_front(int val){
        Node* newNode = new Node(val);
        if(head==NULL){
            head = tail = newNode;
            return;
        } else {
            head->prev = newNode;
            newNode->next = head;
            head = newNode;
        }
    }
    void print_DLL(){
        Node* temp = head;
        while(temp!=NULL){
            cout << temp->data << "<->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
    void push_back(int val){
        Node* newNode = new Node(val);
        if(head==NULL){
            head = tail = newNode;
            return;
        } 
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        
    }
    // if only head is given -> then we first find the last node
    // void push_back(int val){
    //     Node* newNode = new Node(val);
    //     Node* temp = head;
    //     while(temp->next!=NULL){ // last node
    //         temp = temp->next;
    //     }
    //     if(head == NULL){
    //         head = tail = newNode;
    //         return;
    //     } 
    //         temp->next = newNode;
    //         newNode->prev = temp;
    //    
    // }
    void pop_front(){
        if(head==NULL){
            cout << "List is empty\n";
            return;
        }
        Node* temp = head;
        head = head->next;
        if(head!=NULL){
          head->prev = NULL;  
        }
        
        temp->next = NULL;
        delete temp;
    }
    void pop_back(){
        if(head==NULL){
            cout << "List  is empty\n";
            return;
        }
        Node*temp = tail;
        tail = tail->prev;
        if(tail!=NULL){
            tail->next = NULL;
        }
        temp->prev = NULL;
        delete temp;

    }
    int search(int val){
        Node* temp = head;
        int index = 0;
        while(temp!=NULL && temp->data!=val){
            temp = temp->next;
            index++;
        }
        if(temp==NULL){
            return -1;
        }
        return index;
    }
    void insert(int val, int pos){
        if(pos<0){
            cout << "Invalid position" << endl;
            return;
        }
        if(pos==0){ // for first index
            push_front(val);
            return;
        }
        Node* temp1 = head;
        Node* temp2 = head;
        for(int i=0; i<pos-1; i++){ // temp1 now pointss to pos-1 index
            if(temp1==NULL){
                cout <<"Position is out of range!" << endl;
                return;
            }
            temp1 = temp1->next;
        }
        if(temp1->next == NULL){ // for last index
            push_back(val);
            return;
        }
        temp2 = temp1->next; // temp2 points to the pos index 
        // we have to insert in between these two nodes

        Node* newNode = new Node(val);

        temp1->next = newNode;
        newNode->prev = temp1;
        newNode->next = temp2;
        temp2->prev = newNode;
    }
};

int main(){

    Doubly_LL dll;
    dll.push_front(1);
    dll.push_front(2);
    dll.push_front(3);
    dll.push_back(4);
    // dll.pop_front();
    dll.print_DLL(); 
    // dll.pop_back();
    // dll.print_DLL();
    cout << dll.search(6);

    return 0;
}