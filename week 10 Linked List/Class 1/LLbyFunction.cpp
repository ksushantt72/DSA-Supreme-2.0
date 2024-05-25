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
    // Node *first = new Node(20);
    // Node *second = new Node(30);
    // Node *third = new Node(40);
    // Node *fourth = new Node(50);
    // Node *fifth = new Node(60);

    // first->next = second;
    // second->next = third;
    // third->next = fourth;
    // fourth->next = fifth;
    // // fifth is already assigned to NULL as it is the last Node

    // Node *head = first;
    // Node *tail = fifth;
    // PrintLL(head);
    Node*head=NULL;
    Node*tail=NULL;

    insertAtHead(head, tail, 50);
    insertAtTail(head, tail, 60);
    insertAtHead(head, tail, 40);
    insertAtHead(head, tail, 30);
    insertAtHead(head, tail, 20);
    insertAtHead(head, tail, 10);
    insertAtTail(head, tail, 70);
    insertAtTail(head, tail, 80);

    PrintLL(head);


}