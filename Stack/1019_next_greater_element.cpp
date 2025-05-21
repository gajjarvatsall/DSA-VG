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
void solve(ListNode* head, vector<int> &ans)
{
    ListNode* temp = head;
    stack<int> s;

    while(temp)
    {
        while (!s.empty() && s.top() <= temp->val)
        {
            s.pop();
        }

        if (s.empty())
        {
            ans.push_back(0);
        }
        else
        {
            ans.push_back(s.top());
        }

        s.push(temp->val);
        temp = temp->next;
    }
}
ListNode* reverseHead(ListNode* &head){
    ListNode* prev = nullptr;
    ListNode* curr = head;

    while(curr){
        ListNode* next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}
class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        head = reverseHead(head);
        vector<int> ans;

        solve(head,ans);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
int main()
{
    
    return 0;
}