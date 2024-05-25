#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // ctor
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
// Printll
void PrintLL(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        // temp ko next node pe move kr denge
        temp = temp->next;
    }
    cout << endl;
}



// Insert at head
void insertathead(Node *&head,Node *&tail, int data)
{
    Node *newNode = new Node(data);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        // pehle newnode ke next ko head se connect krenge
        newNode->next = head;
        // head ko update kr denge
        head = newNode;
    }
}


void insertatTail(Node*&head,Node*&tail,int data){
    Node*newnode=new Node(data);
    if(head==NULL){
        //in case of empty List we will just assign newnode as tail
        head=newnode;
        tail=newnode;
    }
    else{
        //in case of Non empty linked list
        tail->next=newnode;
        tail=newnode;
    }
}

int main()
{
    // i have created an empty linked list and then inserted values

    Node*head=NULL;
    Node*tail=NULL;
    
    insertatTail(head, tail, 60);
    insertatTail(head, tail, 60);
    insertathead(head, tail, 50);
    insertathead(head, tail, 40);
    insertathead(head, tail, 30);
    insertathead(head, tail, 20);
    insertathead(head, tail, 10);
    insertatTail(head, tail, 70);
    insertatTail(head, tail, 80);

    PrintLL(head);
}