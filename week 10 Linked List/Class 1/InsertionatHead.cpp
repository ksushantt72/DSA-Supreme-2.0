#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // Default Constructor
    Node()
    {
        // cout << "We are inside default Constructor" << endl;
        this->next = NULL;
    }

    Node(int data)
    {
        // cout << "I am inside Parametrized constructor" << endl;
        this->data = data;
        this->next = NULL;
    }
};

void PrintLL(Node *head)
{
    // Hm original Pointer se cher char nhi krenge isiliye temp pointer create kr rhe hain
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << endl;
}

void InsertAtHead(Node *&head, int data)
{

    if (head == NULL)
    {
        // It is the case when thee List is empty
        Node *newNode = new Node(data);
        head = newNode;
    }
    else
    {
        // Create a new Node
        Node *newNode = new Node(data);
        // attach new node to head node
        newNode->next = head;
        head = newNode;
    }
}


int main()
{
    Node *first = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    Node *fourth = new Node(40);
    Node *fifth = new Node(50);

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;

    Node *head = first;
    cout << "Printing Linked List" << endl;
    PrintLL(head);

    InsertAtHead(head, 500);
    PrintLL(head);


}