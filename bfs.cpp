#include <iostream>
#include <queue>

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

void bfs(Node* root){ // level order traversal visit nodes level by level
    if(root == NULL)
        return;
    
    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        Node* current = q.front();
        q.pop();
        
        cout << current->data << " ";

        if(current->left)
            q.push(current->left);
        if(current->right);
            q.push(current->right);
    }
}

int main() {

    Node* root = new Node(10);
    root->left = new Node(4);
    root->right = new Node(23);
    root->left->left = new Node(2);
    root->left->right = new Node(8);
    root->right->right = new Node(43);

    bfs(root);
    
    return 0;
}
