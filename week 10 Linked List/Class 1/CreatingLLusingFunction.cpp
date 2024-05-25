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
// InsertAtHead Function Declaration
void InsertAtHead(Node* &head, int data)
{
    Node *newNode = new Node(data);
    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        // Naye wale node ke next pointer ko head se connect krenge
        newNode->next = head;
        // Aur phir finally 1st element ko head declate kr denge which is newNode
        head = newNode;
    }
}
void insertAtTail(Node* &head,Node* &tail, int data) {
        if(head == NULL) {
                Node* newNode = new Node(data);
                head = newNode;
                tail = newNode;
                
        }
        else {
            //step1: creatae a node
            Node* newNode = new Node(data);
            //step2: connect woth tail ndoe
            tail->next = newNode;
            //step3: update tail;
            tail = newNode;
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

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    InsertAtHead(head, 10);
    InsertAtHead(head, 20);
    InsertAtHead(head, 30);
    insertAtTail(head, tail, 10);
    InsertAtHead(head, 50);
    PrintLL(head);
}