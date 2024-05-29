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
    Node(int x, Node *next) : data(x), next(next){}
};

void insertAtHead(Node *&head, Node *&tail, int data)
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

void printLL(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << endl;
}

void reverseLL(Node *&head)
{
    Node *prev = NULL;
    Node *curr = head;

    while (curr != NULL)
    {
        Node *nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
    }
    head = prev;
}

void recRevLL(Node *&head, Node *&prev, Node *&curr)
{
    // Writing Base Case
    if (curr == NULL)
    {
        head = prev;
        return;
    }

    // EK CASE KHUD SOLVE KARNA HAI
    // store the next node of LL so that it is not lost while changing next pointer of curr Node
    Node *nextNode = curr->next;
    // change the Pointer of the curr Node
    curr->next = prev;
    // update prev
    prev = curr;
    // update curr
    curr = nextNode;

    // Baaki case recursion call sambhal lega

    return recRevLL(head, prev, curr);
}

Node *revAftermid(Node *&head)
{
    // Finding the Middle ELEMENT

    Node *slow = head;
    Node *fast = head;

    while (fast->next != NULL)
    {
        fast = fast->next;
        if (fast->next != NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }
    }
    // slow will be the Pointer which is standing right on the middle Node of linked list
    Node *head2 = slow->next;
    slow->next = NULL;

    // Jab middle node mill jaye to usse aage ke saare Nodes ko reverse kr dena hai
    reverseLL(head2);
}
bool checkPalindrome(Node *&head1, Node *&head2)
{
    revAftermid(head1);
    Node *temp1 = head1;
    Node *temp2 = head2;

    while (head1 != NULL && head2 != NULL)
    {
        if (head1 == head2)
        {
            head1 = head1->next;
            head2 = head2->next;
        }
        else
        {
            // since else case is being executed
            // this means head1 != head 2 so return false
            return false;
        }
    }
    // agar hm yahan hain iska mtlbb false return nhi hua hai and jitni bhi head gyi hai wo equal hai
    // yahan hone ka dura reason ye bhi ho skta hai ki head 2 ya head 1 koi ek ya dono  NULL ho gya ho
    return true;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    insertAtTail(head, tail, 20);
    insertAtTail(head, tail, 10);
    insertAtHead(head, tail, 30);
    insertAtHead(head, tail, 30);
    insertAtHead(head, tail, 20);
    insertAtHead(head, tail, 10);

    // // Reverse Linked List using Recursion
    Node *prev = NULL;
    Node *curr = head;

    recRevLL(head, prev, curr);
    printLL(head);

    Node*head2=revAftermid(head);
    cout << head2->data << endl;
    if (checkPalindrome(head, head2))
    {
        cout << "Linked list Is Palindromic in Nature" << endl;
    }
    else
    {
        cout << "Not Palindrome" << endl;
    }
}