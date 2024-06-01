// HackerRank Question

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

void PrintLL(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << endl;
}

void InsertAtHead(Node *&head, Node *&tail, int data)
{
    Node *newNode = new Node(data);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {

        newNode->next = head;
        head = newNode;
    }
}

void InsertatTail(Node *&head, Node *&tail, int data)
{
    Node *newNode = new Node(data);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
}


int length(Node*&head){
    int count=0;
    Node*temp=head;
    while(temp!=nullptr){
        temp=temp->next;
        count++;
    }
    return count;
}


void KthNode(Node*&head,int position){
    Node*temp=head;
    int count=0;
    int len=length(head);
    while(count != len-position-1){
        temp=temp->next;
        count++;
    }
    cout << temp->data << endl;
}




int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    InsertatTail(head, tail, 70);
    InsertAtHead(head, tail, 60);
    InsertAtHead(head, tail, 50);
    InsertAtHead(head, tail, 40);
    InsertAtHead(head, tail, 30);
    InsertAtHead(head, tail, 20);
    InsertAtHead(head, tail, 10);
    PrintLL(head);

    KthNode(head,1);
}