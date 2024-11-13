#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // Constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

Node *CreateLL(Node *&head, int data)
{
    Node *newNode = new Node(data);
    Node *temp = head;
    if (head == nullptr)
    {
        head = newNode;
    }
    // now traversing to the end of the linked list
    else
    {
        while (temp->next != nullptr)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}
int NodeLen(Node*&head){
    int count = 0;
    Node*temp=head;
    while(temp!=nullptr){
        count++;
        temp=temp->next;
    }
    return count;
}

Node* reverseKGroup(Node* head, int k) {
    if (!head || k == 1) return head;

    Node* temp = head;
    int count = 0;
    while (temp && count < k) {
        temp = temp->next;
        count++;
    }

    if (count == k) {
        // Reverse k nodes
        Node* previous = nullptr;
        Node* current = head;
        Node* next = nullptr;
        int i = 0;
        while (i < k && current) {
            next = current->next;
            current->next = previous;
            previous = current;
            current = next;
            i++;
        }

        head->next = reverseKGroup(next, k);

        return previous;
    }

    // If there are less nodes then k nodes, return the head as it is
    return head;
}



void PrintLL(Node *&head)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
}

int main()
{
    int num;
    cout << "enter the Nmber of Nodes in LL : ";
    cin >> num;
    Node *head = nullptr;

    for (int i = 1; i <= num; i++)
    {
        int data;
        cout << "for Node : " << i << ", Enter the Data ";
        cin >> data;
        CreateLL(head, data);
    }
    // Printing before reversing
    PrintLL(head);

    cout << endl;
    int k;
    cout << "enter the Value of k : ";
    cin >> k;
    
    Node*NewList=reverseKGroup(head,k);
    PrintLL(NewList);
    return 0;
}