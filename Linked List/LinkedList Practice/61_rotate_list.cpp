#include<bits/stdc++.h>
using namespace std;
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
    int getLen(ListNode* head) {
        int len = 0;
        ListNode* temp = head;
        while (temp) {
            len++;
            temp = temp->next;
        }
        return len;
    }

    ListNode* rotateRight(ListNode* head, int k) {
        if (head == nullptr || head->next == nullptr || k == 0) {
            return head;
        }

        int len = getLen(head);
        k = k % len;  // normalize rotations
        if (k == 0) return head;

        int n = len - k;

        ListNode* temp = head;
        for (int i = 0; i < n - 1; i++) {
            temp = temp->next;
        }

        ListNode* revNode = temp->next;
        temp->next = nullptr;

        ListNode* it = revNode;
        while (it->next) {
            it = it->next;
        }

        it->next = head;
        return revNode;
    }
};

int main()
{
    
    return 0;
}