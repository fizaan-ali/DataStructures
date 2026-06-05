#include <iostream>
#include <stack>

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

void dfs(Node* root){
    if(root == NULL)
        return;
    
    stack<Node*> s;
    s.push(root);

    while(!s.empty()){
        Node* current = s.top();
        s.pop();
        cout << current->data << " ";
        if(current->right)
            s.push(current->right);
        if(current->left)
            s.push(current->left);
    }
}

int main() {

    Node* root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(20);    

    dfs(root);

    return 0;
}
