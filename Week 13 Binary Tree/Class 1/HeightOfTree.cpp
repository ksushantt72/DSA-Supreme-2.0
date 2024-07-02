#include <iostream>
#include <queue>
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
    cout << "Enter the value : ";
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

//Now here we will be writing the function for finding the height of the tree
int Approach1Height(Node*&root){
    //Base Case for recursion 

    if(root==nullptr){
        return 0;
    }

    //We will find the leftHeight and rightHeight recursively
    int leftHeight=Approach1Height(root->left);
    int rightHeight=Approach1Height(root->right);

    return max(leftHeight,rightHeight)+1;
}


int  Approach2Height(Node*&root){
    //we will find the height using level order traversal
    queue<Node*>q;

    q.push(root);
    q.push(nullptr);
    int height=0;
    while(!q.empty()){
        Node*frontNode=q.front();
        q.pop();
        if(frontNode==nullptr){
            height++;
            if(!q.empty()){
                q.push(nullptr);
            }
        }
        else{
            if(frontNode->left!=nullptr){
                q.push(frontNode->left);
            }
            if(frontNode->right!=nullptr){
                q.push(frontNode->right);
            }
        }
    }
    return height;
}


int main()
{
    Node*root=CreateTree();
    cout << "Height Of the Tree using Approach 1 is:"<< Approach1Height(root) << endl;
    cout << "Height of the Tree using Approach 2 is :"<< Approach2Height(root) << endl;  
    return 0;
}