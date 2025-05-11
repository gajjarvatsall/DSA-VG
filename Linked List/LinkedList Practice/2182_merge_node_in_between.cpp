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
    ListNode* mergeNodes(ListNode* head) {
        if (head == nullptr)
            return head;
        int ans = 0;
        ListNode* it = head;
        ListNode* prev = it;
        while (it) {
            
            if (it->val == 0) {
                if (it->next) {
                    ListNode* t = it->next;
                    while (t->val != 0) {
                        ans += t->val;
                        t = t->next;
                    }
                    it->val = ans;
                    ans = 0;
                    it->next = t;
                }else{
                    prev->next = nullptr;
                    it = prev;
                }
            }
            prev = it;
            it=it->next;
        }
        return head;
    }
};
int main()
{
    
    return 0;
}