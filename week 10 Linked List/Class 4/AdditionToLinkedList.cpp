#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node*next;

    Node(){
        this->next=NULL;
    }
    
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

void PrintLL(Node*&head){
    Node*temp=head;
    while(temp!=NULL){
        cout << temp->data << "->";
        temp=temp->next;
    }
    cout << endl;
}

void insertAtHead(Node*&head,Node*&tail,int data){
    Node*newNode=new Node(data);
    if(head==NULL){
        head=newNode;
        tail=newNode;
    }
    else{
        newNode->next=head;
        head=newNode;
    }
}

void insertAtTail(Node*&head,Node*&tail,int data){
    Node*newNode=new Node(data);
    if(head==NULL){
        head=newNode;
        tail=newNode;
    }
    else{
        tail->next=newNode;
        tail=newNode;
    }
}

void reverseLL(Node*&head){
    Node*prev=NULL;
    Node*curr=head;

    while(curr!=NULL){
        Node*nextNode=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nextNode;
    }
    head=prev;


}

void AddtoLL(Node*&head,int data){
    Node*temp=head;
    int carry=data;
    while(temp!=NULL){
        //pehle data me add krke new data sum naame se create krenge;
        int totalSum=temp->data+carry;
        //uske baad sum wale se wo digit extract krenge jo uss node me store hoga
        int digit=totalSum%10;
        temp->data=digit;
        //fir carry update krenge
        carry=totalSum/10;
        //agar node khtm ho gya aur carry non zero har to if conditon lagana parega
        if(temp->next==NULL && carry!=0){
            Node*newnode=new Node(carry);
            //attach the new node to the linked list
            temp->next=newnode;
            //since this is our last node so we will break from here
            break;
        }
        //lastly node ko update kr denge
        temp=temp->next;
    }
}



int main(){
    Node*head=NULL;
    Node*tail=NULL;
    insertAtTail(head,tail,9);
    insertAtHead(head,tail,9);
    insertAtHead(head,tail,9);
    insertAtHead(head,tail,1);

    PrintLL(head);

    //For Addition Process, we will reverse the LL first

    reverseLL(head);

    //Now we will add
    int data=1;
    AddtoLL(head,data);
    //After the Addition we will reverse the Nodes to get added Linked list
    reverseLL(head);
    PrintLL(head);

}