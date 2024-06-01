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

void printLL(Node *&head)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << endl;
}

void insertAtHead(Node *&head, Node *&tail, int data)
{
    Node *newnode = new Node(data);
    if (head == nullptr)
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
    if (head == nullptr)
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
void mergeLists(Node *&head1, Node *&head2)
{
    Node*top=head1;
    Node*down=head2;


    //creating dummy node for the connection between nodes
    Node*ans= new Node(-1);
    Node*dummynode=ans;

//ye while loop tabtak chalega jab tk top ya down me se koi ek null na ho jaaye
    while(top!=nullptr && down!=nullptr){
        if(top->data <= down->data){
            //iss case me dummy node ko lesser value se connect krenge jo hai top node
            dummynode->next=top;
            //fir dummy node ko update krenge
            dummynode=top;
            //aur fir top node ko update krenge
            top=top->next;
        }
        else{
            //iss case me dummy node ko lesser value se connect krenge jo hai down node
            dummynode->next=down;
            //fir dummy node ko update krenge
            dummynode=down;
            //aur fir down node ko update krenge
            down=down->next;
        }
        //from the if and else statement we can see clearly that 
        //whichever list becomes null first has the dummy node
        //so finally dummy node will be connected to the list which hai node left
    }

    //yahan pe hain iska mtlb top ya down kisi ek ka data khtm ho gya hai
    //jiska node null hua hai ussi ke ek previous pe mera dummy node para hua hai 
    //so the problem here is who has dummy node
    //so we will create case
    if(top==nullptr){
        dummynode->next=down;
    }
    if(down==nullptr){
        //this is the case where down=nullptr
        dummynode->next=top;
    }
    head1=head2=ans->next;
    

}
int main()
{
    // Linked List 1
    Node *head1 = nullptr;
    Node *tail1 = nullptr;

    // Linked List 2
    Node *head2 = nullptr;
    Node *tail2 = nullptr;

    // Inserting Values in Linked List 2
    insertAtTail(head1, tail1, 30);
    insertAtHead(head1, tail1, 20);
    insertAtHead(head1, tail1, 10);

    // Inserting Values in Linked List 2
    insertAtTail(head2, tail1, 18);
    insertAtHead(head2, tail1, 10);
    insertAtHead(head2, tail1, 5);

    printLL(head1);
    printLL(head2);

    mergeLists(head1,head2);
    printLL(head2);

}