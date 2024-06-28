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
    cout << "Enter the data: ";
    int data;
    cin >> data;

    if (data == -1)
    {
        return nullptr;
    }
    Node *root = new Node(data);
    // Create LeftSubtree
    cout << "For the Left of Node : "<< root->data << ", ";
    root->left = CreateTree();
    // Create RightSubtree
    cout << "For the right of Node : "<< root->data << ", ";
    root->right = CreateTree();

    return root;
}

// Declaring a function for Level Order Traversal of Tree

void LevelOrderTraversal(Node *&rootNode)
{
    queue<Node *> q;
    q.push(rootNode);

    // we will print the answer using the While loop
    while (!q.empty())
    {
        Node *front = q.front();
        // Now we will pop the front element
        q.pop();
        // we will print the Front element
        cout << front->data << "->";

        // Inserting left and right elements of current front element
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

int main()
{
    Node *root = CreateTree();
    cout << endl;
    LevelOrderTraversal(root);
    return 0;
}