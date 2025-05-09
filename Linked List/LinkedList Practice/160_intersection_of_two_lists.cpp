#include<bits/stdc++.h>
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
class Solution {
public:
    int getLen(ListNode* head) {
        ListNode* temp = head;
        int len = 0;
        while (temp) {
            len++;
            temp = temp->next;
        }
        return len;
    }
    
    ListNode* getIntersectionNode(ListNode *headA, ListNode *headB) {
    int lenA = getLen(headA);
    int lenB = getLen(headB);

    ListNode* a = headA;
    ListNode* b = headB;

    // Align start of both lists
    if (lenA > lenB) {
        for (int i = 0; i < lenA - lenB; i++) a = a->next;
    } else {
        for (int i = 0; i < lenB - lenA; i++) b = b->next;
    }

    // Traverse together
    while (a && b) {
        if (a == b) return a;
        a = a->next;
        b = b->next;
    }

    return nullptr;
}
};
int main()

{
    
    return 0;
}