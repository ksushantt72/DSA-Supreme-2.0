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
    Node(int x, Node *next) : data(x), next(next) {}
};
// Printll
int length(Node *&head)
{
    Node *temp = head;
    int len = 0;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
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

void deleteNodes(Node *&head, int m, int n)
{
    Node *temp = head;

    if (temp == nullptr || temp->next == nullptr)
    {
        return;
    }
    // 1 case khudse solve krna hai
    // for traversal of m nodes we will initialise mcount
    int mcount = 0;
    while (mcount < m - 1)
    {
        mcount++;
        temp = temp->next;
        if (temp == nullptr)
        {
            return;
        }
    }
    // Yahan pe mera temp pointer jo hai wo deletion node se ek pehle hai
    Node *prev = temp;
    //Yahan pe maine Bahaut baar galtii karii thi
    //Temp ko update krna jaruri hai warna jo temp abhi prev pe hai wo delete ho saktii hai 
    temp=temp->next;
    int ncount = 0;

    while (ncount < n)
    {
        ncount++;
        if (temp == nullptr)
        {
            // agar mera temp null hua to break krenge return nhi
            // kyukii agar return krenge to fir NULL se prev ko initialise nhi kr payenge
            // break krne se ye loop yahin terminate ho jayegi and the further processes will be executed
            break;
        }
        Node *nextNode = temp->next;
        delete temp;
        temp = nextNode;
    }
    // yahan hain iska mtlbb saare nodes delete ho chuke hain
    // we just need to connect prev to temp node which is after the deleted node
    prev->next = temp;
    // baaki ka case recursion sambhal lega
    deleteNodes(temp, m, n);
}

int main()
{
    // i have created an empty linked list and then inserted value4
    Node *head = NULL;
    Node *tail = NULL;

    insertathead(head, tail, 60);
    insertathead(head, tail, 50);
    insertathead(head, tail, 40);
    insertathead(head, tail, 30);
    insertathead(head, tail, 20);
    insertathead(head, tail, 10);
    insertatTail(head, tail, 70);
    insertatTail(head, tail, 80);
    insertatTail(head, tail, 90);
    insertatTail(head, tail, 100);
    insertatTail(head, tail, 110);
    insertatTail(head, tail, 120);

    PrintLL(head);

    // CASE--->> Mujhe "m" Nodes ke baad "n" Nodes delete karne hain
    // Dummy funciton ---> delete(head,m,n)
    deleteNodes(head, 2, 3);
    PrintLL(head);
}