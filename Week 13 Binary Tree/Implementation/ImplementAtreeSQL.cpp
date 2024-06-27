#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node*left;
    Node*right;

    //Constructor
    Node(int data){
        this->data=data;
        this->left=nullptr;
        this->right=nullptr;
    }
};

Node*CreateTree(){
    cout << "Enter the Value to be Entered for the Node: ";
    int data;
    cin >> data;
    if(data==-1){
        return nullptr;
    }
    Node*rootNode=new Node(data);
    //Create Left Subtree Using Recursion 
    cout << "For Left Node of "<< rootNode->data << endl;
    rootNode->left=CreateTree();
    //Create RightSubtree Using Recursion 
    cout << "For Right Node of "<< rootNode->data << endl;
    rootNode->right=CreateTree();

    //After the Recursion Statment of both the subtree has been returned
    return rootNode;
}



int main()
{   
    Node*root=CreateTree();
    cout << "Root Node" << root->data << endl;
    cout << "LeftBranch of Root Node:"<< root->left->data << endl;
    cout << "RightBranch of Root Node:"<< root->right->data << endl;

    return 0;
}