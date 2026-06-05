#include<iostream>
#include<queue>

using namespace std;

class Node{
public: 
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = right = NULL;
    }
};

void insert(Node*& root, int value){
    if(root == NULL){
        root = new Node(value);
        return;
    }

    queue<Node*> q;
    q.push(root);
    
}

int main() {

    

    return 0;
}
