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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* answer = new ListNode(0);
        ListNode* curr = answer;
        int carry = 0;
        int a1, a2, sum;

        while(l1 || l2 || carry > 0) {
            if (l1 != nullptr) a1 = l1->val;
            else a1 = 0;

            if (l2 != nullptr) a2 = l2->val;
            else a2 = 0;

            sum = a1 + a2 + carry;
            carry = sum / 10;

            curr->next = new ListNode(sum%10);
            curr = curr->next;
            
            if  (l1 != nullptr) l1 = l1->next;
            else l1 = nullptr;

            if  (l2 != nullptr) l2 = l2->next;
            else l2 = nullptr;
        }

        ListNode* temp = answer;
        answer = answer->next;
        delete temp;
        temp = nullptr;

        return answer;
    }
};