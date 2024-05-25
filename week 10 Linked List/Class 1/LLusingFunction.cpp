#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    // Next is the Pointer where we will keep the address of next node
    Node *next;

    // Constructor

    Node()
    {
        // I am Inside Default Ctor
        this->next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

// Creating Function From Here
void PrintLL(Node *head)
{
    // Creating a temprary array for traversal
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        // we will update the temp to its next node
        temp = temp->next;
    }
    cout << endl;
}

void insertAtHead(Node *&head, int data)
{
    // Creating a new Node to be inserted at head
    Node *newNode = new Node(data);
    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        // Naye wale node ke next pointer ko head se connect krenge
        newNode->next = head;
        // aur phir 1st element ko head declare krenge which is newNode
        head = newNode;
    }
}

void insertAtTail(Node *&head, Node *&tail, int data)
{
    Node *newNode = new Node(data);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        // tail ke next ko naye wale node se connect krenge
        tail->next = newNode;
        // aur phir tail ko update kr denge
        tail = newNode;
    }
}

int main()
{
    
    Node *head = NULL;
    Node *tail = NULL;
    // Node *first = new Node(10);
    // Node *second = new Node(20);

    // first->next = second;
    // Node *tail = second;
    // Node *head = first;
    // // insertAtTail(head, tail, 400);
    // insertAtHead(head, 10);
    // insertAtHead(head, 20);
    // insertAtHead(head, 30);
    // insertAtTail(head, tail, 10);
    // insertAtHead(head, 50);
    insertAtHead(head,100);
    insertAtHead(head,1000);
    insertAtTail(head,tail,500);
    // insertAtTail(head,tail,400);
    // insertAtHead(head,100);
    // insertAtTail(head,tail,300);
    // insertAtTail(head,tail,200);
    
    PrintLL(head);
}