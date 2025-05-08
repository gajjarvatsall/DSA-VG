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
    int data;
    ListNode *next;
    ListNode(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
class Solution {
    public:
        int checkLen(ListNode* head){
            int len = 0;
            ListNode* temp = head;
            while(temp != NULL){
                len++;
                temp=temp->next;
            }
            return len;
        }
        ListNode* reverseKGroup(ListNode* head, int k) {
            if(head == NULL || head->next == NULL){
                return head;
            }
    
    
            int getlen = checkLen(head);
            if(getlen < k){
                return head;
            }
    
            ListNode* prev = NULL;
            ListNode* curr = head;
            int position = 0;
    
            while(position < k){
                ListNode* forward = curr->next;
                curr->next = prev;
                prev = curr;
                curr = forward;
                position++;
            }
    
            if(curr != NULL){
                ListNode* recusionHead = reverseKGroup(curr,k);
                head->next = recusionHead;
            }
            return prev;
    
        }
    };
int main()
{
    
    return 0;
}