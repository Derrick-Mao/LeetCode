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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int cnt = 0;
        ListNode* curr = head;

        // count number of nodes in the list
        while (curr) {
            ++cnt;
            curr = curr->next;
        }

        // find mth node from the left to remove
        int m = cnt - n - 1;
        curr = head;

        // if mth node is head
        if (m == -1) {
            head = head->next;
            delete curr;
            return head;
        }

        // traverse to m-1 node
        for (int i = 0; i < m; ++i) {
            curr = curr->next;
        }

        ListNode* temp = curr->next;
        curr->next = curr->next->next;
        delete temp;

        return head;
    }
};