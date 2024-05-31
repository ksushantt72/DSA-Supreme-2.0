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

void deleteNodes(Node*&head,int m,int n ){
    int len=length(head);
    if(head==NULL || len < m+n){
        return;
    }
    //temp ko head pe laga denge
    Node*temp=head;
    //jitna nodes skip krna hai uska condition likh lenge
    //skip m nodes 
    while(m!=1){
        m--;
        //agar temp mera NULL ho jaye to return ho jayenge means m nodes NA
        if(temp==NULL){
            break;
        }
        temp=temp->next;
    }
    if (temp == nullptr) {
        return; // Not enough nodes to skip
    }
    //yahan pr hm mth node pr khare honge
    // we will store mth node
    Node*mthNode=temp;
    
    //Now we have to delete n nodes after the node on which we are standing
    //we will move temp one step ahead so that we are on the node which are to be deleted
    temp=mthNode->next;
    while(n!=0){
        //agar jo node pe khare hain wo node NULL hua to break kr jayenge
        n--;
        if(temp==NULL){
            break;
        }
        //temp ke agle wale Node ko pehle store kr lenge
        Node*nextNode=temp->next;
        //fir temp ko delete kr denge
        delete temp;
        //Now we will update temp for further traversal
        temp=nextNode;
    }
    //connect mth node to next node or temp
    mthNode->next=temp;

    //Since One case has been solved
    //the further cases will be solved by recursion
    deleteNodes(temp,m,n);



}




int main()
{
    // i have created an empty linked list and then inserted values

Node *first = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    Node *fourth = new Node(40);
    Node *fifth = new Node(50);
    Node *sixth = new Node(60);
    Node *seventh = new Node(70);
    Node *eighth = new Node(80);
    Node *ninth = new Node(90);
    Node *tenth = new Node(100);


    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = seventh;
    seventh->next = eighth;
    eighth->next = ninth;
    ninth->next = tenth;

    Node*head=first;

    PrintLL(head);

    //CASE--->> Mujhe "m" Nodes ke baad "n" Nodes delete karne hain 
    //Dummy funciton ---> delete(head,m,n)
    deleteNodes(head,2,3);
    PrintLL(head);
    
}