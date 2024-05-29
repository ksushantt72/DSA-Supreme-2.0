#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

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
    Node *newnode = new Node(data);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
    }
    else
    {
        newnode->next = head;
        head = newnode;
    }
}

void insertAtTail(Node *&head, Node *&tail, int data)
{
    Node *newnode = new Node(data);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
    }
    else
    {
        tail->next = newnode;
        tail = newnode;
    }
}

void printLL(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << endl;
}

void reverseLL(Node *&head)
{
    Node *prev = NULL;
    Node *curr = head;

    while (curr != NULL)
    {
        Node *nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
    }
    head = prev;
}

void recRevLL(Node *&head, Node *&prev, Node *&curr)
{
    // Writing Base Case
    if (curr == NULL)
    {
        head = prev;
        return;
    }

    // EK CASE KHUD SOLVE KARNA HAI
    //store the next node of LL so that it is not lost while changing next pointer
    Node *nextNode = curr->next;
    //change the Pointer of the head
    curr->next = prev;
    //update prev
    prev = curr;
    //update curr
    curr = nextNode;

    // Baaki case recursion call sambhal lega

    return recRevLL(head, prev, curr);
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    insertAtTail(head, tail, 50);
    insertAtHead(head, tail, 40);
    insertAtHead(head, tail, 30);
    insertAtHead(head, tail, 20);
    insertAtHead(head, tail, 10);

    printLL(head);

    // Reverse Linked List using Recursion
    Node *prev = NULL;
    Node *curr = head;

    recRevLL(head,prev,curr);
    printLL(head);

    
}