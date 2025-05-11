#include <bits/stdc++.h>
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
bool hasCycle(ListNode *head)
{
    unordered_map<ListNode *, bool> umap;
    ListNode *temp = head;

    while (temp != NULL)
    {
        if (umap[temp] == true)
        {
            return true;
        }
        else
        {
            umap[temp] = true;
        }
        temp = temp->next;
    }
    return false;
}
int main()
{

    return 0;
}