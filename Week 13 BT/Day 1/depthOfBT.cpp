#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node*left;
    Node*right;

    Node(int data){
        this->data=data;
        this->left=nullptr;
        this->right=nullptr;
    }
};


Node*CreateTree(){
    int data;
    cout << "Enter data : ";
    cin>> data;
    if(data == -1){
        return nullptr;
    }

    //creating node with data'
    Node*root = new Node(data);
    cout << "For Left of Node:"<< root->data << ", ";
    root->left=CreateTree();
    cout << "For Right of Node:"<< root->data << ", ";
    root->right=CreateTree();

    //return is necessary so that after each recursive loops complete at Right we will return back to where the call was made from
    return root;

}

//creating a function to print the height of binary tree
int DepthofBt(Node*&root){
    if(root==nullptr){
        return 0;
    }

    int leftTree=DepthofBt(root->left);
    int rightTree=DepthofBt(root->right);

    int height = max(leftTree,rightTree)+1;

    return height;

}

int main(){
    Node*root=CreateTree();
    cout << "The depth of BT is :"<< DepthofBt(root) << endl;
}