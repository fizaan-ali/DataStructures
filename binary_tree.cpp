#include<iostream>
#include<stack>
#include<queue>

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

// traversal includes bfs(level traversal) and dfs(depth traversal)
// dfs includes preorder, inorder, and postorder

void preorder(Node* root){
    if(root == NULL){
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(Node* root){
    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void postorder(Node* root){
    if(root == NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

void bfs(Node* root){
    if(root == NULL){
        return;
    }
    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        Node* current = q.front();
        q.pop();

        cout << current->data << " ";

        if(current->left){
            q.push(current->left);
        }
        if(current->right){
            q.push(current->right);
        }

    }
}

// stack implementation
void dfs(Node* root){
    stack<Node*> s;
    s.push(root);

    while(!s.empty()){
        Node* current = s.top();
        s.pop();

        cout << current->data << " ";

        if(current->right){
            s.push(current->right);
        }
        if(current->left){
            s.push(current->left);
        }// preorder - we want left first so put left after on stackk
    }
}



int main() {


    // building the binary tree manually 

    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    preorder(root);
    cout << endl;
    inorder(root);
    cout << endl;
    postorder(root);
    cout << endl;
    bfs(root);
    cout << endl;
    dfs(root);
    cout << endl; 

    return 0;
}
