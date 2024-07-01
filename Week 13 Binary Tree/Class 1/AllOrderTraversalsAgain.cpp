#include<iostream>
#include<queue>
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
    cout << "Enter the Value: ";
    int data;
    cin >> data;

    if(data == -1){
        return nullptr;
    }

    Node*root=new Node(data);
    cout << "For Left Node of "<<root->data << ", "; 
    root->left=createTree();

    cout << "For right Node of "<<root->data << ", "; 
    root->right=createTree();

    return root;
}

void PreOrderTraversal(Node*&root){
    //Base case
    if(root==nullptr){
        return;
    }

    //Printing Before traversing the left
    cout << root->data << "->";
    PreOrderTraversal(root->left);
    PreOrderTraversal(root->right);
}
void inOrderTraversal(Node*&root){
    if(root==nullptr){
        return;
    }

    inOrderTraversal(root->left);
    cout << root->data << "->";
    inOrderTraversal(root->right);
}


void PostOrderTraversal(Node*&root){
    //Base case
    if(root==nullptr){
        return;
    }
    PostOrderTraversal(root->left);
    PostOrderTraversal(root->right);
    cout << root->data << "->";
}


void LevelOrderTravesal(Node*&root){
    queue<Node*>q;
    
    //Initial push to the Queue
    q.push(root);
    q.push(nullptr);

    while(!q.empty()){
        Node*front=q.front();
        q.pop();
        //ACCESSING AND ADDING MARKER(NULL)
        if(front==nullptr){
            cout << endl;
            if(!q.empty()){
                q.push(nullptr);
            }
        }
        else{
            cout << front->data << "->";
            if(front->left!=nullptr){
                q.push(front->left);
            }
            if(front->right!=nullptr){
                q.push(front->right);
            }
        }
    }
}

int main(){
    Node*rootNode=createTree();

    cout << "PreorderTraversal:";
    PreOrderTraversal(rootNode);
    cout << endl;


    
    cout << "inOrderTraversal:";
    inOrderTraversal(rootNode);
    cout << endl;


    
    cout << "PostOrderTraversal:";
    PostOrderTraversal(rootNode);
    cout << endl;

    
    cout << "LevelOrderTraversal:";
    LevelOrderTravesal(rootNode);
    cout << endl;


}