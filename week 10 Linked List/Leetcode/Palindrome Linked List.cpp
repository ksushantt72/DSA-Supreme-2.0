#include <iostream>
using namespace std;

// Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution
{
public:
    bool Compare(ListNode *&head1, ListNode *&head2)
    {
        while (head1 != NULL && head2 != NULL)
        {
            if (head1->val == head2->val)
            {
                head1 = head1->next;
                head2 = head2->next;
            }
            else
            {
                return false;
            }
        }
        // agar yahan hain iska mtlbb while loop se koi value return nhi hui hai
        //  ya ye bhi ho skti hai ki while loop terminate ho gya ho head 2 ke
        // null pahuch jaane ki wajah se,so we will return true;
        return true;
    }
    ListNode *recursionReverse(ListNode *prev, ListNode *curr)
    {
        // Base case
        // agar curr NULL ho jayega to prev ko new head bana denge
        if (curr == NULL)
        {
            return prev;
        }

        // 1 case khul sambhalna hai //baaki recursion dekh lega
        // writing that one case
        // We will store curr->next in newnode first
        ListNode *nextNode = curr->next;
        // then we will delink curr from the next node  curr->next and linkit with prev
        curr->next = prev;
        // now we will update prev as curr //and update curr as new node
        prev = curr;
        curr = nextNode;
        // baaki ka case recursion dekh lega
        return recursionReverse(prev, curr);
    }
    // void reverseAfterMid(ListNode* &head2){
    //     ListNode*prev=NULL;
    //     ListNode*curr=head2;
    //     while(curr!=NULL){
    //         //Jb tk head 2 NUll pe nahi pahuch jaata hai tb tk pointers reverse karna hai
    //         ListNode*nextNode=curr->next;
    //         curr->next=prev;
    //         prev=curr;
    //         curr=nextNode;
    //     }
    //     //Yahan hain iska matlab curr node NULL PE hai
    //     //declare prev as the new head of the linked list
    //     head2=prev;
    // }
    bool isPalindrome(ListNode *head)
    {
        ListNode *slow = head;
        ListNode *fast = head;
        while (fast->next != NULL)
        {
            fast = fast->next;
            if (fast->next != NULL)
            {
                fast = fast->next;
                slow = slow->next;
            }
        }
        // Now slow is the Mid of the LINKED LIST
        ListNode *midNode = slow;
        ListNode *head2 = midNode->next;

        // Delinking from the Middle
        midNode->next = NULL;

        // Now reversing the List after MId which is new head
        ListNode *prev = NULL;
        ListNode *curr = head2;
        head2 = recursionReverse(prev, curr);
        // from the above function call our LL from the mid has been reversed
        // Now compare the Values
        return Compare(head, head2);
    }
};