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

void createTail(Node *&head, Node *&tail)
{
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    tail = temp;
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
    Node *tail = NULL;

    cout << tail << endl;
    createTail(head, tail);
    cout << (tail->data) << endl;
}