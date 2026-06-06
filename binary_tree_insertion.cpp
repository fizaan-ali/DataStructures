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

    while(!q.empty()){
        Node* current = q.front();
        q.pop();
        if(current->left == NULL){
            current->left = new Node(value);
            return;
        }
        else{
            q.push(current->left);
        }

        if(current->right == NULL){
            current->right = new Node(value);
            return;
        }
        else{
            q.push(current->right);
        }
    }
    
}

void preorder(Node* root){
    if(root == NULL){
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}


int main() {

    Node* root = NULL;

    insert(root, 10);
    insert(root, 5);
    insert(root, 10);
    insert(root, 2);
    insert(root, 7);

    cout << "Preorder: ";
    preorder(root);

    return 0;
}
