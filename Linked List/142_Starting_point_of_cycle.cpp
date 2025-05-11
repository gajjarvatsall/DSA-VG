#include <bits/stdc++.h>
using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

class ListNode
{
public:
    int val;
    ListNode *next;
    ListNode(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
class Solution
{
public:
    ListNode *hasCycle(ListNode *head)
    {
        ListNode *slow = head;
        ListNode *fast = head;

        while (fast != NULL)
        {
            fast = fast->next;
            if (fast != NULL)
            {
                fast = fast->next;
                slow = slow->next;
                if (fast == slow)
                {
                    return fast;
                }
            }
        }
        return nullptr;
    }

    ListNode *detectCycle(ListNode *head)
    {
        ListNode *fast = hasCycle(head);

        if (fast == nullptr)
            return nullptr;

        ListNode *slow = head;

        while (slow != fast)
        {
            slow = slow->next;
            fast = fast->next;
        }
        return slow;
    }
};

int main()
{

    return 0;
}