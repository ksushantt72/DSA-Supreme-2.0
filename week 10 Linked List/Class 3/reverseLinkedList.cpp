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
        Node*nextNode=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nextNode;
    }
    //Jab loop khtm ho jayegi to hm yahan honge
    //aur yahan pr prev last node pr hogi which is new head in opposite direction 
    head=prev; 
}

int main()
{
    Node *first = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    Node *fourth = new Node(40);
    Node *fifth = new Node(50);

    first->next = second;
    cout << first->next << endl;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;

    Node *head = first;
    cout << "head : " << head << endl;

    head=second;
    cout << "head : " << head << endl;
    printLL(head);
    reverseLL(head);
    printLL(head);
}