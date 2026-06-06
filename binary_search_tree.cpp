// binary search tree -> very useful for searching inside tree
// left subtree < root < right subtree
// O(logn)
#include<iostream>

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

bool bst_search(Node* root, int key){ // bst search 
    if(root==NULL)
        return false;
    
    if(key == root->data)
        return true;

    if(key < root->data)
        return bst_search(root->left, key);
    else
        return bst_search(root->right, key);
}

Node* bst_insertion(Node* root, int value){
    if(root==NULL){
        return new Node(value);
    }
    if(value < root->data){
        root->left = bst_insertion(root->left, value);
    }
    else if(value > root->data){
        root->right = bst_insertion(root->right, value);
    }
    return root;
}


//property of bst is if print in inorder it prints in sorted order
void inorder(Node* root){
    if(root==NULL)
        return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
    
}

int main() {

    //let's create a binary search tree

    Node* root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(15);
    root->left->left = new Node(3);
    root->left->right = new Node(7);
    root->right->right = new Node(23);

    inorder(root);
    cout << endl;

    cout << boolalpha << bst_search(root, 0);

    return 0;
}
