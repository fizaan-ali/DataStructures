#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};
class Linked_List {
    Node* head;
    Node* tail;
public:
    Linked_List(){
        head = tail = NULL;
    }

    void push_front(int val){
        Node* newNode = new Node(val);
        if(head == NULL){ // means if the list is emmpty
            head = tail = newNode;
        } else {
            newNode->next = head;
            head = newNode;
        }

    }
    void printLL(){
        Node* temp = head;
        while(temp!=NULL){
            cout << temp->data  << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
/* // following function -> if tail is given
    void push_back(int val){
        Node* newNode = new Node(val);
        if(head==NULL){
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }
*/
// if only head is given
    void push_back(int val){
        Node* newNode = new Node(val);
        Node* temp = head;
        while(temp->next!=NULL){ // this gives us the last node
            temp = temp->next;
        }
        temp->next = newNode;
        
    }
    void pop_front(){
        if(head==NULL){
            cout << "Nothing to pop!\n";
            return;
        }
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    void pop_back(){
        if(head==NULL){
            cout << "Nothing to pop!\n";
            return;
        }
        Node* temp = head;
        while(temp->next->next!=NULL){ // finds the second last node
            temp = temp->next;
        }
        temp->next = NULL;
        delete tail;
        tail = temp;
    }
    void insert(int val, int pos){
        if(pos<0){
            cout << "Invalid position " << endl;
            return;
        }
        if(pos==0){
            push_front(val);
        }
        Node* newNode = new Node(val);
        Node*temp = head;
        for(int i=0; i<pos-1; i++){ // this gives us the node before our position
            if(temp==NULL){
                cout << "Invalid position" << endl;
                return;
            }
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
    int search(int val){
        Node* temp = head;
        int index = 0;
        while(temp!=NULL && temp->data!=val){
            temp = temp->next;
            index++;
        }
        if(temp == NULL){
            return -1;
        }
        return index;
    }
};

int main(){

    Linked_List ll;
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);

    ll.printLL();

    ll.push_back(4);
    ll.printLL();

    ll.pop_front();
    ll.printLL();

    // ll.pop_back();
    // ll.printLL();
    ll.insert(3,2);
    ll.printLL();

    cout << ll.search(5);

    return 0;
}