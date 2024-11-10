#include <iostream>
#include <queue>
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

Node *createTree()
{
    cout << "Enter Data : ";
    int data;
    cin >> data;
    if (data == -1)
    {
        return nullptr;
    }

    // agar -1 nahi hai to subtree create krenge
    Node *root = new Node(data);
    cout << "For Left of Root Node : " << root->data << ", ";
    root->left = createTree();

    cout << "For Right of Root Node : " << root->data << ", ";
    root->right = createTree();

    return root;
}



int main()
{



    return 0;
}