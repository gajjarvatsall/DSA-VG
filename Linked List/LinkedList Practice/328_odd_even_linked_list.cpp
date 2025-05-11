#include<bits/stdc++.h>
using namespace std;
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
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if (!head || head->next == nullptr)
            return head;

        ListNode* h1 = head;
        ListNode* h2 = head->next;

        ListNode* evenHead = h2;

        while (h2 && h2->next) {
            h1->next = h2->next;
            h2->next = h2->next->next;
            h1 = h1->next;
            h2 = h2->next;
        }
        h1->next = evenHead;
        return head;
    }
};
int main()
{
    
    return 0;
}