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
    void solve(ListNode* &head,int &carry){
        if(!head) return;
        solve(head->next,carry);

        int temp = head->val * 2 + carry;
        head->val = temp % 10;
        carry = temp / 10;
    }
    ListNode* doubleIt(ListNode* head) {
        int carry = 0;
        solve(head,carry);
        if(carry > 0){
            ListNode* newNode = new ListNode(carry);
            newNode->next = head;
            head = newNode;
        }
        return head;
    }
};
int main()
{
    
    return 0;
}