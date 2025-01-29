#include <iostream>
#include <queue>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    // Parameterised ctor
    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *createTree()
{
    // This function will return the root Node as the returning parameter
    int data;
    cout << "Enter the Data for Node : ";
    cin >> data;
    if (data == -1)
    {
        // agar invalid node hai to return ho jayenge
        return nullptr;
    }
    // agar data invalid nahi hai to apan node create krenge
    Node *root = new Node(data);
    // then we will recursively create a tree
    cout << "for Left of the Node " << root->data << ", ";
    root->left = createTree();
    cout << "for Right of the Node " << root->data << ", ";
    root->right = createTree();

    // jab sab kch ho jayega to root node ko return kr denge
    return root;
}
// we will write a function to print the data of the tree taken as input from the user
void PreOrderTraversal(Node *&root)
{
    if (root == NULL)
    {
        return;
    }
    // we will follow NLR ordering in preorder traversal
    cout << root->data << "->";
    // recursive call for left and right
    PreOrderTraversal(root->left);
    PreOrderTraversal(root->right);
}

void InorderTraversal(Node *&root)
{
    if (root == nullptr)
    {
        return;
    }
    InorderTraversal(root->left);
    cout << root->data << "->";
    InorderTraversal(root->right);
}

void PostOrderTraversal(Node *&root)
{
    if (root == nullptr)
    {
        return;
    }
    PostOrderTraversal(root->left);
    cout << root->data << "->";
    PostOrderTraversal(root->right);
}

void levelOrderTraversal(Node *&rootNode)
{
    queue<Node *> q;
    // Base case- we need to first push the root node to start our journey
    q.push(rootNode);
    q.push(nullptr);
    while (!q.empty())
    {
        Node *front = q.front();
        q.pop();

        if (front == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << front->data << "->";
            // front ka data print krne ke baat hm uske left aur right nodes ko push kr denge
            if (front->left != NULL)
            {
                q.push(front->left);
            }
            if (front->right != NULL)
            {
                q.push(front->right);
            }
        }
    }
}

int main()
{
    Node *root = createTree();

    cout << "PreOrderTraversal" << ": ";
    PreOrderTraversal(root);
    cout << endl;

    cout << "InorderTraversal" << ": ";
    InorderTraversal(root);
    cout << endl;

    cout << "PostOrderTraversal" << ": ";
    PostOrderTraversal(root);
    cout << endl;

    cout << "Level Order Traversal :"<< endl;
    levelOrderTraversal(root);
}