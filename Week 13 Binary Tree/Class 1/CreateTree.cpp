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
    cout << "Enter the Value: ";
    int data;
    cin >> data;
    if(data==-1){
        return nullptr;
    }

    Node*root=new Node(data);
    cout << "For left of Node "<< root->data << ", ";
    root->left=CreateTree();
    cout << "For right of Node "<< root->data << ", ";
    root->right=CreateTree();
    
    return root;
}


int main()
{   
    Node*root=CreateTree();

    return 0;
}