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

    // destructor
    ~Node()
    {
        cout << "Destructor Called for : " << this->data << endl;
    }
};
void insertAtHead(Node *&head, Node *&tail, int data)
{
    Node *newnode = new Node(data);
    // if the lsit is empty
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
    }
    // for Non empty Linked list
    else
    {
        newnode->next = head;
        head = newnode;
    }
}

void insertAtTail(Node *&head, Node *&tail, int data)
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

void PrintLL(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << endl;
}

int Length(Node *&head)
{
    int count = 0;
    Node *temp = head;
    while (temp != 0)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

// For Deleting Node
void deleteNode(Node *&head, Node *&tail, int position)
{
    // Lenght of LL= Length(head);
    int len = Length(head);

    if (position < 1)
    {
        cout << "cannot delete anything : OUT OF SCOPE" << endl;
    }
    if(head==tail){
        //Single element wala cse
        Node*temp=head;
        delete temp;
        head=NULL;
        tail=NULL;
    }
    else if (position > len)
    {
        cout << "cannot delete anything : OUT OF SCOPE" << endl;
    }
    else if (position == 1)
    {
        // delete from Head
        Node *temp = head;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }
    else if (position == len)
    {
        // delete from tail
        Node *prev = head;
        while (prev->next != tail)
        {
            prev = prev->next;
        }
        // av ham previous pe pahuch chuke hain
        // Now point prev to NULL
        prev->next = NULL;
        // delete tail
        delete tail;
        // and update tail
        tail = prev;

        // Node *temp = head;
        // for (int i = 0; i < len - 2; i++)
        // {
        //     temp = temp->next;
        // }
        // temp->next = NULL;
        // delete tail;
        // tail = temp;
    }
    else
    {
        // this is the case where position lies in middle
        // curr ko head se point and prev ko null se
        Node *curr = head;
        Node *prev = NULL;
        while (position != 1)
        {
            // Prev hmesa curr se 1 piche rhega aur traverse continued
            prev = curr;
            curr = curr->next;
            position--;
        }
        // Now curr is standing at the Node which needs to be deleted
        // and prev is just behind the curr node
        prev->next = curr->next;
        // isolate krne ke liye cuye current node ko NULL Point krwaa do
        curr->next = NULL;
        // Since the Current node is isolated,delete it
        delete curr;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    insertAtTail(head, tail, 50);
    // insertAtHead(head, tail, 40);
    // insertAtHead(head, tail, 30);
    // insertAtHead(head, tail, 20);
    // insertAtHead(head, tail, 10);

    PrintLL(head);
    // cout << "Before tail "<< tail->data << endl;
    cout << "Lenth of the Node is : " << Length(head) << endl;
    deleteNode(head, tail, 1);
    PrintLL(head);
    // cout << "After tail "<< tail->data << endl;


}