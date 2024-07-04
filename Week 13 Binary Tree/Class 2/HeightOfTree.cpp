#include <iostream>
#include <queue>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    // Constructor
    Node(int data)
    {
        this->data = data;
        this->left = nullptr;
        this->right = nullptr;
    }
};

Node *createTree()
{
    cout << "Enter the Value:";
    int data;
    cin >> data;

    if (data == -1)
    {
        return nullptr;
    }
    Node *root = new Node(data);

    // CReate left subtree
    cout << "For left of Node: " << root->data << ", ";
    root->left = createTree();

    // Crreate Right subtree
    cout << "For Right of Node: " << root->data << ", ";
    root->right = createTree();

    return root;
}

// Height of tree using recursion
int HeightOfTree1(Node *&root)
{
    // Base Case
    if (root == nullptr)
    {
        return 0;
    }

    int leftKaAns = HeightOfTree1(root->left);
    int rightKaAns = HeightOfTree1(root->right);

    int height = max(leftKaAns, rightKaAns) + 1;

    return height;
}

// Height of tree using Level order Traversal
int HeightOfTree2(Node *&root)
{
    if(root==nullptr){
        return 0;
    }
    queue<Node *> q;
    q.push(root);
    q.push(nullptr);
    int height=0;

    while (!q.empty())
    {
        Node*front=q.front();
        q.pop();
        if(front==nullptr){
            height++;
            if(!q.empty()){
                q.push(nullptr);
            }
        }

        else{
            if(front->left!=nullptr){
                q.push(front->left);
            }
            if(front->right!=nullptr){
                q.push(front->right);
            }
        }
    }
    //when while loop is ended the height is contructed
    return height;
    
}

int main()
{
    Node *root = createTree();
    cout << "Height of the Tree is :" << HeightOfTree1(root) << endl;
    cout << "Height if the tree is :" << HeightOfTree2(root) << endl;
    return 0;
}