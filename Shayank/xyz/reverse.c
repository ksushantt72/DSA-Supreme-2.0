#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Function to create a new node with given data
Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to create a linked list
void CreateLL(Node** head, int data) {
    Node* newNode = createNode(data);
    Node* temp = *head;
    if (*head == NULL) {
        *head = newNode;
    }
    else {
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

// Function to find the length of the linked list
int NodeLen(Node* head) {
    int count = 0;
    Node* temp = head;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}

// Function to reverse nodes in k group
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
        Node* previous = NULL;
        Node* current = head;
        Node* next = NULL;
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

    // If there are less nodes than k, return the head as it is
    return head;
}

// Function to print the linked list
void PrintLL(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    int num;
    printf("Enter the number of nodes in LL: ");
    scanf("%d", &num);
    Node* head = NULL;

    for (int i = 1; i <= num; i++) {
        int data;
        printf("For Node %d, enter the data: ", i);
        scanf("%d", &data);
        CreateLL(&head, data);
    }

    // Printing before reversing
    printf("Linked list before reversing:\n");
    PrintLL(head);

    int k;
    printf("\nEnter the value of k: ");
    scanf("%d", &k);
    
    Node* NewList = reverseKGroup(head, k);
    printf("Linked list after reversing in k group:\n");
    PrintLL(NewList);

    return 0;
}
