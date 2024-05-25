#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    // constructor
    Node()
    {
        this->next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(Node *&head, Node *&tail, int data)
{
    // Checking wheteher it is empty list or not
    Node *newNode = new Node(data);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    // if the list is not empty , then just placing the first member at 1st position and declaring it as head
    else
    {
        newNode->next = head;
        head = newNode;
    }
}

void insertAtTail(Node *&head, Node *&tail, int data)
{
    Node *newNode = new Node(data);
    // Checking if the list is empty or single
    // head==NULL only when the list is empty
    if (head == NULL)
    {
        // Because there is Single element and it will be head for sure
        // for it to be tail it must be non single list
        // And we know that the newNode->next = NULL so this is sufficienct here
        // Writing here newNode->next=NULL is useless as it is preddefined by the constructor
        head = newNode;
        // here mistake happens
        tail = newNode;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
}

// printing Function
void PrintLL(Node *&head)
{
    // first creating temporary array for traversal of the list
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{

    Node *head = NULL;
    Node *tail = NULL;
    insertAtHead(head, tail, 40);
    insertAtHead(head, tail, 30);
    insertAtHead(head, tail, 20);
    insertAtHead(head, tail, 10);
    insertAtTail(head, tail, 50);
    cout << " Printing Nodes " << endl;
    PrintLL(head);
}