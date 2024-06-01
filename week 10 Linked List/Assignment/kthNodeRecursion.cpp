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
int length(Node *&head)
{
    int count = 0;
    Node *temp = head;
    while (temp != nullptr)
    {
        temp = temp->next;
        count++;
    }
    return count;
}

void KthNode(Node *head, int &position, int &ans)
{
    Node *temp = head;
    if (temp == nullptr)
    {
        return;
    }
    //hm yahan pe temp ko update krenge to backtracking ke time dikkat aayegi
    //so we will update temp inside function passing
    // temp = temp->next;

    // recursive call
    KthNode(temp->next, position, ans);
    //jab kth node ke recursive call se wapis aayenge tb 
    if (position == 0)
    {
        ans = temp->data;
    }
    position--;
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

    int ans = -1;
    int position = 7;
    KthNode(head, position, ans);
    cout <<  "Data at kth Node from tail will be : " << ans << endl;
}