#include<bits/stdc++.h>
using namespace std;
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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* ans = new ListNode(-1);
        ListNode* a1 = ans;

        while (list1 && list2) {
            if (list1->val < list2->val) {
                a1->next = list1;
                list1 = list1->next;

            } else {
                a1->next = list2;
                list2 = list2->next;
            }

            a1 = a1->next;
        }
        if (list1) {
            a1->next = list1;
        }
        if (list2) {
            a1->next = list2;
        }
        return ans->next;
    }
    ListNode* findMid(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head->next;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
    ListNode* sortList(ListNode* head) {
        if(head == 0 || head->next == 0){
            return head;
        }

        ListNode* mid = findMid(head);
        ListNode* left = head;
        ListNode* right = mid->next;

        mid->next = 0;

        left = sortList(left);
        right = sortList(right);

        ListNode* mergeLL = mergeTwoLists(left,right);
        return mergeLL;
    }
};
int main()
{
    
    return 0;
}