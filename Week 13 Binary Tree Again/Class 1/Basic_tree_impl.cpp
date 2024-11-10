#include <iostream>
#include<queue>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    //constructor
    Node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }

};


//it returns root node of the tree
Node*createTree(){
    int data;
    cout << "Enter the data : ";
    cin >> data;

    //agar user -1 input data me dega
    //to hm samjhenge ki user node nahi lagana chahta hai 
    if(data==-1){
        return NULL;//ye if case base condition ke liye bhi kaam kr rha hai
    }
    //agar data=-1 nahi hai mtlb wo node lagana chahta hai
    //so we will use recursion for this

    //pehle node banana hai aur recursion ki help se subtree create krni hai
    Node*root=new Node(data);
    cout << "for left of Node "<< root->data << ", ";
    root->left=createTree();
    cout << "for Right of Node "<< root->data << ", ";
    root->right=createTree();


    return root;
}

void preOrderTraversal(Node*&root){
    if(root==nullptr){
        return;
    }

    //otherwise we will first print the data and then recursive call
    cout << root->data << "->";
    
    //recursive call
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

void inOrderTraversal(Node*&root){
    if(root==nullptr){
        return;
    }

    //otherwise we will first print the data and then recursive call
    
    //recursive call
    inOrderTraversal(root->left);
    cout << root->data << "->";
    inOrderTraversal(root->right);
}



void postOrderTraversal(Node*&root){
    if(root==nullptr){
        return;
    }

    //otherwise we will first print the data and then recursive call
    
    //recursive call
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout << root->data << "->";
}


void levelOrderTraversal(Node *&root)
{
    queue<Node *> q;
    // we have create queue for storing the nodes of each level along with nullptr

    // Basic Entries for first time
    q.push(root);
    q.push(nullptr);

    while (!q.empty()) // Jab tk queue empty nahi ho jaata tbtk ye krna hai
    {
        Node *front = q.front();
        q.pop();

        // Now checking conditions
        if (front == nullptr)
        {
            // agar aisa hai to saare nodes pushed honge and we need to  insert endl
            cout << endl;
            // if queue is not empty then we need to insert nullptr
            if (!q.empty())
            {
                q.push(nullptr);
            }
        }
        else
        {
            // agar front null nahi hai to uske saare childrens ko push krna hoga and we need to print the front
            cout << front->data << "->";
            // ab uske childrens ko push kr denge
            if (front->left != nullptr)
            {
                q.push(front->left);
            }
            if (front->right != nullptr)
            {
                q.push(front->right);
            }
        }
    }
}





int main()
{
    Node*root=createTree();
    cout << "PreOrderTraversal : ";
    preOrderTraversal(root);
    cout << endl;
    cout << "In_OrderTraversal : ";
    inOrderTraversal(root);
    cout << endl;
    cout << "Post_OrderTraversal : ";
    postOrderTraversal(root);
    cout << "Level_OrderTraversal : " << endl;
    levelOrderTraversal(root);

    return 0;
}