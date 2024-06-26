#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    // Default Constructor
    Node(int val)
    {
        this->data = val;
        this->left = nullptr;
        this->right = nullptr;
    }
};

Node* createTree(){
    cout << "Enter the Value ";
    int data;
    cin >> data;

    if(data==-1){
        //iss case me node ko null pe point krke return krna hai 

        return nullptr;
    }

    //creating a newNOde
    Node*root=new Node(data);



    //For Left SubTree
    cout << "For Left Node of "<< root->data << endl;
    root->left=createTree();

    //For right SubTree
    cout << "For Right Node "<< root->data << endl;
    root->right=createTree();    
    return root;

}

int main()
{
    Node*root=createTree();
    cout << root->data << endl;

    cout << root->left->data << endl;

    return 0;
}