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
    Node(int x, Node *next) : data(x), next(next){}

};
// Printll
int length(Node*&head){
    Node*temp=head;
    int len=0;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;
}
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
void insertathead(Node *&head, Node *&tail, int data)
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

void insertatTail(Node *&head, Node *&tail, int data)
{
    Node *newnode = new Node(data);
    if (head == NULL)
    {
        // in case of empty List we will just assign newnode as tail
        head = newnode;
        tail = newnode;
    }
    else
    {
        // in case of Non empty linked list
        tail->next = newnode;
        tail = newnode;
    }
}

void deleteNodes(Node*&head,int m,int n){
    Node*temp=head;
    //Base case

    int len=length(head);
    if(temp==NULL || temp->next==NULL || len < m+n ){
        return;
    }

    //1 case khudse solve krna hai 
    while(m!=1){
        m--;
        temp=temp->next;
    }
    //yahn pe temp uss location pe hai jiske baad se deletion start hogi 
    Node*prev=temp;
    //Now from loop we will Move temp till which it needs to be deleted
    while(n!=0){
        temp=temp->next;
        n--;
    }
    //yahan pe temp uss location pe hogii jahan tk deletion hoga
    //so first we will store the address of nextnode so that the track of
    //further linkedlist is not lost
    Node*nextNode=temp->next;
    //Now we will start unlinking
    prev->next=nextNode;
    // temp->next=NULL;

    // Baaki ka case recursion sambhal lega
    deleteNodes(nextNode,m,n);

}



int main()
{
    // i have created an empty linked list and then inserted values

    Node *head = NULL;
    Node *tail = NULL;

    insertathead(head, tail, 50);
    insertathead(head, tail, 40);
    insertathead(head, tail, 30);
    insertathead(head, tail, 20);
    insertathead(head, tail, 10);
    insertatTail(head, tail, 60);
    insertatTail(head, tail, 70);
    insertatTail(head, tail, 80);
    insertatTail(head, tail, 90);
    insertatTail(head, tail, 100);
    // insertatTail(head, tail, 110);



    PrintLL(head);

    //CASE--->> Mujhe "m" Nodes ke baad "n" Nodes delete karne hain 
    //Dummy funciton ---> delete(head,m,n)
    deleteNodes(head,2,3);
    PrintLL(head);
    
}