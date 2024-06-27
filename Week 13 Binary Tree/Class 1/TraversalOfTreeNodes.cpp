#include <iostream>
using namespace std;

class Node{
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


Node*createTree(){
    cout << "Enter Value:";
    int data;
    cin >> data;

    if(data==-1){
        return nullptr;
    }
    Node*rootNode=new Node(data);
    //creating LEFT-SUBTREE
    cout << "for Left Node of "<< rootNode->data << ", ";
    rootNode->left=createTree();
    //creating RIGHT-SUBTREE
    cout << "for Right Node of "<< rootNode->data << ", ";
    rootNode->right=createTree();

    return rootNode;
}

void TraverseTree(Node*&root){
}

int main()
{  
    Node*root=createTree();

    cout << "Data stored at RootNode is: "<< root->data;
    TraverseTree(root);

    return 0;
}