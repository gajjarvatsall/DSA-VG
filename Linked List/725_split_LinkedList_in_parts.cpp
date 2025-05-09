#include <bits/stdc++.h>
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
class Solution
{
public:
    vector<ListNode *> splitListToParts(ListNode *head, int k)
    {
        int N = 0;
        auto it = head;

        while (it != NULL)
        {
            N++;
            it = it->next;
        }

        int partSize = N / k;
        int extras = N % k;

        vector<ListNode *> ans(k, nullptr);
        it = head;
        for (int i = 0; i < k && it; i++)
        {
            ans[i] = it;
            int currentSize = partSize + (extras-- > 0 ? 1 : 0);
            for (int j = 0; j < currentSize - 1; j++)
            {
                it = it->next;
            }
            auto nextpart = it->next;
            it->next = nullptr;
            it = nextpart;
        }
        return ans;
    }
};
int main()
{

    return 0;
}