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
    ListNode* deleteMiddle(ListNode* head) {
        if (head == nullptr) {
            return nullptr;
        }

        if (head->next == nullptr) {
            delete head;
            return nullptr;
        }

        int ctr = 0;
        ListNode* curr = head;
        while (curr) {
            ++ctr;
            curr = curr->next;
        }
        int mid =  ctr / 2;

        ctr = 0;
        for (curr = head; curr != nullptr; curr = curr->next) {
            ++ctr;
            if (ctr == mid && curr->next) {
                ListNode* temp = curr->next;
                curr->next = curr->next->next;
                delete temp;
            }
        }

        return head;
    }
};