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


Node*CreateTree(){
    cout << "Enter the Value to be Entered: ";
    int data;
    cin >> data;

    if(data==-1){
        return nullptr;
    }

    Node*root=new Node(data);

    //Create Left Subtree
    cout << "For Left of Node: "<< root->data << ", ";
    root->left=CreateTree();

    cout << "For Right of Node: "<< root->data << ", ";
    root->right=CreateTree();

    // ye root pichle recursive call ke left aur right se jaake attach hoga
    //so must not forget about this important line
    return root;
}


int main()
{
    Node*rootNode=CreateTree();
    
    return 0;
}