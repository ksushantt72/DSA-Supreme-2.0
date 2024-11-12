#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    // Constructor
    Node(int data)
    {
        this->data = data;
        this->left = nullptr;
        this->right = nullptr;
    }
};

// This function will return the root node of tree
Node *CreateTree()
{
    int data;
    cout << "Enter the Data : ";
    cin >> data;

    if (data == -1)
    {
        return nullptr;
    }

    // agar data -1 nahi hai to hm nodes insert karenge
    Node *root = new Node(data);

    cout << "for Left of Node : " << root->data << " ,";
    root->left = CreateTree();
    cout << "for Right of Node : " << root->data << " ,";
    root->right = CreateTree();

    return root;
}

void preOrderTraversal(Node*&root){
    if(root==nullptr){
        return;
    }
    cout << root->data << "->";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);

}

void inorderTraversal(Node*&root){
    if(root==nullptr){
        return;
    }

    inorderTraversal(root->left);
    cout << root->data << "->";
    inorderTraversal(root->right);
}


void postOrderTraversal(Node*&root){
    if(root==nullptr){
        return;
    }

    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout << root->data << "->";

}


int main()
{
    Node *root = CreateTree();
    cout << "PreOrderTraversal :- ";
    preOrderTraversal(root);
    cout << endl;

    cout << "InOrderTraversal :- ";
    inorderTraversal(root);
    cout << endl;

    cout << "PostOrderTraversal :- ";
    postOrderTraversal(root);
    cout << endl;
    return 0;
}