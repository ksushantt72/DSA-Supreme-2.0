#include <iostream>
#include <queue>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    // constructor
    Node(int data)
    {
        this->data = data;
        this->left = nullptr;
        this->right = nullptr;
    }
};

// creatingTree
Node *CreateTree()
{
    int data;
    cout << "Enter the data : ";
    cin >> data;
    if (data == -1)
    {
        return nullptr;
    }
    // agar data -1 nahi hai to node create krenge
    Node *root = new Node(data);

    // uske baad apan connect krenge nodes ko using recursion
    cout << "For left Of Node:" << root->data << ", ";
    root->left = CreateTree();
    cout << "For right Of Node:" << root->data << ", ";
    root->right = CreateTree();

    return root;
    
}

void PreOrderTraversal(Node *&root)
{
    // in preorder we follow NLR sequencing
    if (root == nullptr)
    {
        return;
    }
    cout << root->data << "->";
    PreOrderTraversal(root->left);
    PreOrderTraversal(root->right);
}

void inOrderTraversal(Node *&root)
{
    // in preorder we follow NLR sequencing
    if (root == nullptr)
    {
        return;
    }
    inOrderTraversal(root->left);
    cout << root->data << "->";
    inOrderTraversal(root->right);
}

void postOrderTraversal(Node *&root)
{
    // in preorder we follow NLR sequencing
    if (root == nullptr)
    {
        return;
    }
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout << root->data << "->";
}

void LeveLorderTraversal(Node *&root)
{
    // first we will create a queue to store the nodes for comparison
    queue<Node *> q;
    q.push(root);
    q.push(nullptr);

    while(!q.empty()){
        Node*frontNode = q.front();
        //then we will pop that element from the queue
        q.pop();


        if(frontNode==nullptr){
            //then we will add the spacing or endline 
            cout << endl;
            //then we will add nullptr iff the queue is not empty
            if(!q.empty()){
                q.push(nullptr);
            }
        }
        else{
            cout << frontNode->data << "->";
            //in this case we will feed the queue with the left and right element of the rootNode
            if(frontNode->left!=nullptr){
                q.push(frontNode->left);
            }
            if(frontNode->right!=nullptr){
                q.push(frontNode->right);
            }
        }
    }
}

int main()
{
    Node *headNode = CreateTree();

    // Tree has been created and we need to print the Tree
    PreOrderTraversal(headNode);
    cout << endl;
    inOrderTraversal(headNode);
    cout << endl;
    postOrderTraversal(headNode);
    cout << endl;

    LeveLorderTraversal(headNode);
}