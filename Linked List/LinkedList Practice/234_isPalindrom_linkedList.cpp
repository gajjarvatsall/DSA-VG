#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
Node *getMiddle(Node *head, Node *&middleNodeKaPrev)
{
    Node *slow = head;
    Node *fast = head;

    while (fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
            middleNodeKaPrev = slow;
            slow = slow->next;
        }
    }
    return slow;
}
Node *reverseList(Node *&prev, Node *&curr)
{
    while (curr != NULL)
    {
        Node *forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}
bool isPalindrome(Node *head)
{
    if (head == NULL)
    {
        // LL is empty
        return true;
    }
    if (head->next == NULL)
    {
        // single node
        return true;
    }

    // travel till middle node and break the LL in 2 halves
    Node *firstHalfHead = head;
    Node *middleNodeKaPrev = NULL;
    Node *middleNode = getMiddle(head, middleNodeKaPrev);
    // break
    middleNodeKaPrev->next = NULL;

    // reverse the second half
    Node *prev = NULL;
    Node *curr = middleNode;
    Node *secondHalfHead = reverseList(prev, curr);

    // compare both the halves and decide T/F
    // even len wale case me dono part ki length equal hogi
    // odd wale case , second half ki length badi hogi by 1
    // that's why main comparison hamesha first half ki length k hisaab se karunga
    Node *temphead1 = firstHalfHead;
    Node *temphead2 = secondHalfHead;
    while (temphead1 != NULL)
    {
        if (temphead1->data != temphead2->data)
        {
            // not a palindrome
            return false;
        }
        else
        {
            // data equal hai, toh let's move to aage wali nodes
            temphead1 = temphead1->next;
            temphead2 = temphead2->next;
        }
    }
    // agar main yaha tk pohoch gya
    // iska mtlab kahin por bhi
    // data mismatch nahi hua
    // palindrome haib
    return true;
}

int main()
{

    return 0;
}