#include <iostream>
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
   cout << "Enter Data: ";
   int data;
   cin >> data;
   if (data == -1)
   {
      return nullptr;
   }

   Node *root = new Node(data);
   // Left Subtree
   cout << "For left of Node " << root->data << ", ";
   root->left = createTree();
   // RightSubtree
   cout << "For right of Node " << root->data << ", ";
   root->right = createTree();

   return root;
}

void PreOrderTraversal(Node *&root)
{
   Node *temp = root;
   if (temp == nullptr)
   {
      return;
   }
   // Sabse pehle current Node ko print kr denge
   cout << temp->data << "->";
   // Uske baad Recursive Call krenge Left ke liye
   PreOrderTraversal(temp->left);
   // Uske baad Recursive call krenge Right ke liye
   PreOrderTraversal(temp->right);
}

void inOrderTraversal(Node *&root)
{
   Node *temp = root;
   // Base Case
   if (temp == nullptr)
   {
      return;
   }

   // L->Recursive Call for Left
   inOrderTraversal(temp->left);
   // N->Printing the current Node
   cout << temp->data << "->";
   // R->Recursive Call for right
   inOrderTraversal(temp->right);
}
void postOrderTraversal(Node *&root)
{
   Node *temp = root;
   // Base Case
   if (temp == nullptr)
   {
      return;
   }
   // L->Recursive Call for Left
   postOrderTraversal(temp->left);
   // R->Recursive Call for right
   postOrderTraversal(temp->right);
   // N->Printing the current Node
   cout << temp->data << "->";
}

int main()
{
   Node *rootNode = createTree();
   cout << endl;
   cout << "Printing PreOrderTraversal" << " ";
   PreOrderTraversal(rootNode);

   cout << endl;
   cout << "Printing inOrderTraversal" << " ";
   inOrderTraversal(rootNode);

   cout << endl;
   cout << "Printing postOrderTraversal" << " ";
   postOrderTraversal(rootNode);
   return 0;
}