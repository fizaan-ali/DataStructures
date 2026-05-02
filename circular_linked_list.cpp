#include<iostream>
using namespace std;

class Node {
public: 
    int data;
    Node* next;

    Node(int val) : data(val) {
        next = NULL;
    }

};
class Circular_LL {
    Node* head;
    Node* tail;
public:
    Circular_LL(){
        head = tail = NULL;
    }
    void insert_at_head(int val){
        Node* newNode = new Node(val);
        if(head==NULL){
            head = tail = newNode;
            tail->next = head;
            return;
        }
        newNode->next = head;
        head = newNode;
        tail->next = head;
    }
    //if head is not given, we can still do with only tail pointer
    // void insert_head(int val){
    //     Node* newNode = new Node(val);
    //     if(tail==NULL){
    //         tail= newNode;
    //         tail->next = tail;
    //         return;
    //     }
    //     // tail->next always points to head in circular list
    //     newNode->next = tail->next;
    //     tail->next = newNode;

    // }

    void printLL(){
        if(head==NULL){
            cout << "LIst is empty!\n";
            return;
        }
        cout << head->data << "->";
        Node*temp = head->next;
        while(temp!=head){
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << temp->data << endl;
    }
    void insert_at_tail(int val){
        Node* newNode = new Node(val);
        if(head==NULL){
            head = tail = newNode;
            tail->next = head;
            return;
        }
        newNode->next = head;
        tail->next = newNode;
        tail = newNode;   
    }
    void delete_at_head(){
        if(head==NULL){ // no nodes
            cout << "List is empty!\n";
            return;
        }
        if(head==tail){ // only one node
            delete head;
            head = tail = NULL;
            return;
        }
        Node* temp = head;
        head = head->next;
        tail->next = head;
        temp->next = NULL;
        delete temp;
    }
    void delete_at_tail(){
        if(head==NULL){
            cout << "List is empty!\n";
            return;
        }
        if(head==tail){
            delete head;
            head = tail = NULL;
            return;
        }
        // first we find out the second last node!
        Node* temp = head;
        while(temp->next!=tail){//temp is now 2nd last node
            temp = temp->next;
        }
        temp->next = head;
        tail->next = NULL;
        delete tail;
        tail = temp;
    }
};

int main(){

    Circular_LL cll;
    cll.insert_at_head(1);
    cll.insert_at_head(2);
    cll.insert_at_head(3);
    cll.insert_at_tail(4);
    cll.insert_at_tail(5);
    // cll.delete_at_head();
    cll.delete_at_tail();
    cll.printLL();
    return 0;
}