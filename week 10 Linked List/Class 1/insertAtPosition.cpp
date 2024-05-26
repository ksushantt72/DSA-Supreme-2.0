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

void InsertatHead(Node *&head, Node *&tail, int data)
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

void insertatTail(Node *&head, Node *&tail, int data)
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
}

void insertAtPosition(Node *&head, Node *&tail, int data,int position)
{
    int length=5;
    Node *newnode = new Node(data);
    if (position < 1)
    {
        cout << "cannot insert, please insert valid Position" << endl;
    }
    else if (position > length+1)
    {
        cout << "cannot insert, please insert valid Position" << endl;
        return;
    }
    else if(position==1){
        InsertatHead(head,tail,data);
    }
    else if(position==length+1){
        insertatTail(head,tail,data);
    }
    else{
        Node*newnode=new Node(data);
        Node*previous=NULL;
        Node*curr=head;
        while(position!=1){
            previous=curr;
            curr=curr->next;
            position--;
        }
        //is loop ke khtm hote hi position = 1 ho jayega which means previous aur current ke beech 
        //hme apne node daatlna hai previous->next=newnode,newnode->next=current
        //attche prev to newnode
        previous->next=newnode;
        //attach new node to current
        newnode->next=curr;
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
    Node *tail = fifth;

    insertAtPosition(head,tail,1000,7);
    printLL(head);
}   