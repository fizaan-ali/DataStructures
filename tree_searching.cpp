#include<iostream>
#include<queue>

using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data  = val;
        left = right = NULL;
    }
};

bool dfs_search(Node* root, int key){
    if(root==NULL)
        return false;
    
    if(root->data == key)
        return true;

    bool in_left = dfs_search(root->left, key);
    bool in_right = dfs_search(root->right, key);

    return in_left || in_right; 
}

bool bfs_search(Node* root, int key){
    if(root==NULL)
    return false;

    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        Node* current = q.front();
        q.pop();

        if(current->data == key)
            return true;

        if(current->left)
            q.push(current->left);
        
        if(current->right)
            q.push(current->right);

    }

    return false;

}

int main() {

    Node* root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(15);
    root->left->left = new Node(3);
    root->left->right = new Node(7);

    cout << bfs_search(root, 3);

    return 0;
}
