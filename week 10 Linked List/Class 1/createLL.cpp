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

void CreateLL(Node *&head, int data)
{
    Node *newNode = new Node(data);
    Node *temp = head;
    if (head == nullptr)
    {
        head = newNode;
    }
    else
    {
        while (temp->next != nullptr)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void PrintLL(Node *&head)
{
    Node *temp = head;
    if (temp == nullptr)
    {
        return;
    }
    while (temp != nullptr)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
}

int main()
{
    int num;
    cout << "Enter the NUmber of Nodes you want in LL : ";
    cin >> num;

    Node *head = nullptr;

    for (int i = 1; i <= num; i++)
    {
        int data;
        cout << "Enter the Data for Node : " << i  << " : ";
        cin >> data;
        CreateLL(head, data);
    }
    cout << "The LinkedList Taken as Input is : "; 
    PrintLL(head);

    return 0;
}