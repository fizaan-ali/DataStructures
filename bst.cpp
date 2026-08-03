#include<iostream>

using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = right = NULL;
    }
};

bool search(Node* root, int key){
    while(root != NULL){
            if(root == NULL){
            return true;
        }
        else if(key < root->data){
            root = root->left;
        }
        else{
        root = root->right;
        }
    }
    return false;
}

int main() {

    Node* root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(15);
    root->left->left = new Node(3);
    root->left->right = new Node(7);
    root->right->right = new Node(23);

    

    return 0;
}
