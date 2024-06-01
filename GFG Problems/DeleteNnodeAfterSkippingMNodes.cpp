#include <iostream>
using namespace std;

class Node
{
public:
    Node *next;
    int data;
    Node()
    {
        this->next = next;
    }

    Node(int data)
    {
        this->data = data;
        this->next = next;
    }
};

class Solution
{
public:
    void linkdelete(struct Node *head, int M, int N)
    {
        Node *temp = head;
        // Agar mera head ya head ka next NULL ho jaye to return krna hai
        if (temp == nullptr || temp->next == nullptr)
        {
            return;
        }

        // 1 case khud sambhalna hai baaki recursion dekh lega
        // solving 1 case starts from here
        int mcount = 0;
        while (mcount != M - 1)
        {
            mcount++;
            temp = temp->next;
            // agar yahan  pe mera temp null ho jaye to traversal ke liye node hi nahi hai
            if (temp == nullptr)
            {
                return;
            }
        }
        // yahan pe hain iska mtlbb hm delete hone wale node se just ek pehle hain
        Node *prev = temp;
        // temp ko aage badhana jaruri hai warna wo delete ho jayega jab n loop run hoga
        temp = temp->next;

        int ncount = 0;

        while (ncount != N)
        {
            ncount++;
            // sabse pehle to check kr lenge ki temp mera null nhi hai
            // agar hua to yahin se break krke prev ko null se attach kr denge
            // brek krna yahan jaruri isiliye hai kyukii agar return kiye to prev wala
            // node null se connect nahi ho payega
            // break will terminate the while loop but the further case will proceed
            if (temp == nullptr)
            {
                break;
            }
            // otherwise do process deletion
            Node *nextNode = temp->next;
            delete temp;
            temp = nextNode;
        }
        // Yahan pe hain iska mtlbb jo node delete hona tha ho chuka hai
        // aur hm uss node pe hain jisko skip krna hai
        // so we will connect prev node to skipping nodes

        prev->next = temp;

        // baaki ka case recursion sambhal lega
        // calling recursion and passing temp as head of the recursion ka ans
        linkdelete(temp, M, N);
    }
};