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
    cout << "Enter data : ";
    int data;
    cin >> data;

    if (data == -1)
    {
        return nullptr;
    }

    Node *root = new Node(data);
    cout << "For Left of Node :- " << root->data << ", ";
    root->left = CreateTree();
    cout << "For Right of Node :- " << root->data << ", ";
    root->right = CreateTree();

    return root;
}

void LevelOrderTraversal(Node *&root)
{
    queue<Node *> q;
    q.push(root);
    q.push(nullptr);

    while (!q.empty())
    {
        Node *frontNode = q.front();
        q.pop();

        if (frontNode == nullptr)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(nullptr);
            }
        }
        else
        {
            cout << frontNode->data << "->";
            if (frontNode->left != nullptr)
            {
                q.push(frontNode->left);
            }
            if (frontNode->right != nullptr)
            {
                q.push(frontNode->right);
            }
        }
    }
}

int main()
{
    Node *rootNode = CreateTree();


    cout << "Level Order Traversal are as follows : " << endl;
    LevelOrderTraversal(rootNode);

    return 0;
}