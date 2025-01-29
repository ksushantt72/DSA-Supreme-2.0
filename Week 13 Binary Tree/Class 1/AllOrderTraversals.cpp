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

Node *CreateTree()
{
    cout << "Enter the Value to be Entered: ";
    int data;
    cin >> data;

    if (data == -1)
    {
        return nullptr;
    }

    Node *root = new Node(data);

    // Create Left Subtree
    cout << "For Left of Node: " << root->data << ", ";
    root->left = CreateTree();

    cout << "For Right of Node: " << root->data << ", ";
    root->right = CreateTree();

    // ye root pichle recursive call ke left aur right se jaake attach hoga
    // so must not forget about this important line
    return root;
}

void PreorderTraversal(Node *&rootNode)
{
    // Base Case
    if (rootNode == nullptr)
    {
        return;
    }
    // Printing the Current Value in case of PreOrderTraversal
    cout << rootNode->data << "->";
    PreorderTraversal(rootNode->left);
    PreorderTraversal(rootNode->right);
}
void inOrderTraversal(Node *&rootNode)
{
    // Base Case
    if (rootNode == nullptr)
    {
        return;
    }
    // we will print in order
    inOrderTraversal(rootNode->left);
    cout << rootNode->data << "->";
    inOrderTraversal(rootNode->right);
}
void postOrderTraversal(Node *&rootNode)
{
    // Base Case
    if (rootNode == nullptr)
    {
        return;
    }
    // We will print after the Node's left and right Elements are printed

    postOrderTraversal(rootNode->left);
    postOrderTraversal(rootNode->right);
    cout << rootNode->data << "->";
}

void LevelOrderTraversal(Node *&rootNode)
{
    queue<Node *> q;
    q.push(rootNode);
    // we will print the Main root Node initilly
    q.push(nullptr);
    while (!q.empty())
    {
        Node *front = q.front();
        // then we will pop the front element from the queue as it has been already printed
        q.pop();

        if (front == nullptr)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(nullptr);
            }
        }
        else
        {
            cout << front->data << "->";
            // Now we will p1ush the left and right elements of the front
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
    Node *root = CreateTree();

    cout << "Printing using Traversals" << endl;

    cout << "Preorder Traversal: ";
    PreorderTraversal(root);
    cout << endl;

    cout << "inOrder Traversal: ";
    inOrderTraversal(root);
    cout << endl;

    cout << "PostOrderTraversal: ";
    postOrderTraversal(root);
    cout << endl;
    cout << endl;

    cout << "LevelOrderTraversal Printing Levellay " << endl;
    LevelOrderTraversal(root);
    cout << endl;

    return 0;
}