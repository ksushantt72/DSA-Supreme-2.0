#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node()
    {
        this->next = NULL;
        this->prev = NULL;
    }

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
    ~Node()
    {
        cout << "Destructor Called for : " << this->data << endl;
    }
};

void Print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << endl;
}

int len(Node *&head)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

void insertAtHead(Node *&head, Node *&tail, int data)
{
    Node *newnode = new Node(data);
    if (head == NULL)
    {
        // this is the case of empty linked list
        // just assign head and tail to newnode and head and tail assigned to NULL already
        head = newnode;
        tail = newnode;
    }
    else
    {
        // this is the case when the LL is not empty
        // step1:connect newnode to head
        newnode->next = head;
        // step2:connect head to newnode
        head->prev = newnode;
        // step3:assign newnode as new head
        head = newnode;
    }
}

void insertAtTail(Node *&head, Node *&tail, int data)
{
    Node *newnode = new Node(data);
    if (head == NULL)
    {
        // This is the case of empty linked list
        // In this case assing head and tail both to newnode
        head = newnode;
        tail = newnode;
    }
    else
    {
        // this is the case when LL is not empty
        // step1:tail ke next ko newnode se link kro
        tail->next = newnode;
        // step2:newnode ke prev ko tail se link kro
        newnode->prev = tail;
        // step3:new node ko naya tail update krdo
        tail = newnode;
    }
}

void InsertAtPosition(Node *&head, Node *&tail, int data, int position)
{
    int lens = len(head);
    if (position == 1)
    {
        insertAtHead(head, tail, data);
    }
    else if (position == lens)
    {
        insertAtTail(head, tail, data);
    }
    else if (position > lens || position < 1)
    {
        cout << "Cannot Insert, Enter Valid Position " << endl;
    }
    else
    {
        Node *newnode = new Node(data);
        Node *curr = head;
        Node *previous = NULL;
        while (position != 1)
        {
            position--;
            previous = curr;
            curr = curr->next;
        }
        // jab loop se baahar aayenge to curr aur prev aise jagah honge jiske beech humko assign krna hai
        curr->prev = newnode;
        previous->next = newnode;
        newnode->next = curr;
        newnode->prev = previous;
    }
}

void DeleteNode(Node *&head, Node *&tail, int posn)
{
    int lenss = len(head);
    if (posn == 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        head->prev = NULL;
        delete temp;
    }
    else if (head == tail)
    {
        Node *temp = head;
        delete temp;
        head = NULL;
        tail = NULL;
    }
    else if (posn < 1 || posn > lenss)
    {
        cout << " Cannot delete : Not in range" << endl;
    }
    else if (posn == lenss)
    {
        // Delete from tail
        //  Node*preNode=tail->prev;
        //  preNode->next=NULL;
        //  tail->prev=NULL;//New tail updated
        //  delete tail;
        //  tail=preNode;

        Node *temp = tail;
        tail = tail->prev;
        tail->next = NULL;
        temp->prev = NULL;
        delete temp;
    }
    else
    {
        // Case when node lies in Middle
        Node *currNode = head;
        while (posn != 1)
        {
            currNode = currNode->next;
            posn--;
        }
        Node *prevNode = currNode->prev;
        Node *nextNode = currNode->next;



        prevNode->next = nextNode;
        nextNode->prev = prevNode;

        //Now for deleting the CURRNODE, we will delink it from prevNode and nextNode
        // deleting links and assigning new links

        currNode->next = NULL;
        currNode->prev = NULL;

        //deleting the currNode
        delete currNode;
        
        
    }
}

int main()
{

    // Node*head=new Node(40);
    // Print(head);
    // cout << len(head) << endl;

    Node *head = NULL;
    Node *tail = NULL;

    insertAtHead(head, tail, 40);
    insertAtHead(head, tail, 30);
    insertAtHead(head, tail, 20);
    insertAtHead(head, tail, 10);
    insertAtTail(head, tail, 50);
    // InsertAtPosition(head,tail,700,2);
    DeleteNode(head, tail, 3);

    Print(head);
}
