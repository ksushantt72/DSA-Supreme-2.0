#include <iostream>
#include<queue>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    // COnstructor
    Node(int data)
    {
        this->data = data;
        this->left = nullptr;
        this->right = nullptr;
    }
};

Node*createTree(){
    cout << "Enter the Value: ";
    int data;
    cin >> data;

    if(data==-1){
        return nullptr;
    }

    Node*root=new Node(data);
    cout << "For Left of Node "<< root->data << ", ";
    root->left=createTree();

    cout << "For Right of Node "<< root->data << ", ";
    root->right=createTree();

    return root;
}

void preOrderTraversal(Node*&root){
    if (root==nullptr){
        return;
    }
    cout << root->data << "->";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}
void inorderTraversal(Node*&root){
    if (root==nullptr){
        return;
    }
    inorderTraversal(root->left);
    cout << root->data << "->";
    inorderTraversal(root->right);
}

void PostOrderTraversaL(Node*&root){
    if (root==nullptr){
        return;
    }
    PostOrderTraversaL(root->left);
    PostOrderTraversaL(root->right);
    cout << root->data << "->";
}

void AllOrderTraversal(Node*&root){
    queue<Node*>q;
    q.push(root);
    q.push(nullptr);
    int height=0;
    while(!q.empty()){
        Node*front=q.front();
        q.pop();
        if(front==nullptr){
            cout << endl;
            height++;
            if(!q.empty()){
                q.push(nullptr);
            }
        }
        else{
            cout << front->data << "->";
            if(front->left!=nullptr){
                q.push(front->left);
            }
            if(front->right!=nullptr){
                q.push(front->right);
            }
        }
    }
    cout << "Height of the Tree is :" << height << endl;
}

int main()
{
    Node*root=createTree();
    cout << endl;

    cout << "PreorderTraversal: ";
    preOrderTraversal(root);
    cout << endl;
    
    cout << "PostOrderTraversal: ";
    inorderTraversal(root);
    cout << endl;

    cout << "inorderTraversal: ";
    PostOrderTraversaL(root);
    cout << endl;

    cout << "AllOrderTraversal" << endl;
    AllOrderTraversal(root);
    cout << endl;
    return 0;
}