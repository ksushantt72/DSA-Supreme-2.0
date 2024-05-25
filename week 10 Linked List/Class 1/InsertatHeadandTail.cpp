#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // Defaukt ctor
    Node()
    {
        this->next = NULL;
    }
    Node(int data)
    {
        // Saare Next ko creation ke wakt null point kr denge baad me previous ko next se conncet kr denge
        this->data = data;
        this->next = NULL;
    }
};

// Function declaration for Printing the Linked Lists
void PrintLL(Node *head)
{
    // Always remeber Never pass original pointer in function
    // so we will create temporary Pointer
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next; // First->next=second; is already initilised in main , so it will connect from there
    }
    cout << endl;
}

// Insert At Head Function Declaration
void InsertAtHead(Node *&head, int data)
{
    Node *newNode = new Node(data);

    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        newNode->next = head;
        head = newNode;
    }
}

// INsert at Tail Function Declaration
void InsertatTail(Node *&head, Node *&tail, int data)
{
    Node *newNode = new Node(data);
    if (head == NULL)
    {
        newNode = head;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
}

int main()
{
    Node *first = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    Node *fourth = new Node(40);
    Node *fifth = new Node(50);

    // Nodes are Initialised
    // Now we will connect these previous nodes with next nodes address

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    // Fifth is already linked to NULL as this is tail

    // head naam ka pointer bana ke usko first waaale dabbe se conncet kr dena hai
    // which means both will do the same
    Node *head = first;
    Node *tail = fifth;

    // cout << head->data << endl;
    // cout << first->data << endl;

    InsertAtHead(head, 500);
    PrintLL(head);

    InsertatTail(head, tail, 100);
    PrintLL(head);
}