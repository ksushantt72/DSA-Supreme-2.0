#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    // Default Constructor
    Node(int data)
    {
        this->data = data;
        this->left = nullptr;
        this->right = nullptr;
    }
};

Node *CreateTree()
{
    cout << "Enter the Value to  be Entered in Node :";
    int data;
    cin >> data;

    if (data == -1)
    {
        return nullptr;
    }
    Node*root=new Node(data);
    //Using Recursion Creating Left SubTree
    cout << "For Left of  "<< root->data << ", ";
    root->left=CreateTree();
    //Using Recursion Creating Right SubTree
    cout << "For Right of Node " << root->data << ", ";
    root->right=CreateTree();



    //when tree is Made, return root
    return root;
}

int main()
{   
    Node*root=CreateTree();
    cout <<"Root Node is : " << root->data << endl;

    return 0;
}