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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (list1 == nullptr && list2 != nullptr) {
            return list2;
        }

        else if (list1 != nullptr && list2 == nullptr) {
            return list1;
        }

        else if (list1 == nullptr && list2 == nullptr) {
            return nullptr;
        }

        ListNode* head = nullptr;
        ListNode* curr = nullptr;
        ListNode* temp = nullptr;

        if (list1->val <= list2->val) {
            head = list1;
            list1 = list1->next;
        }

        else {
            head = list2;
            list2 = list2->next;
        }

        curr = head;
        while (list1 && list2) {

            if (list1->val <= list2->val) {
                curr->next = list1;
                temp = curr->next;
                curr = temp;
                list1 = list1->next;
            }

            else {
                curr->next = list2;
                temp = curr->next;
                curr = temp;
                list2 = list2->next;
            }
        }

        if (list1 != nullptr) {
            while (list1) {
                curr->next = list1;
                temp = curr->next;
                curr = temp;
                list1 = list1->next;
            }
        }

        else if (list2 != nullptr) {
            while (list2) {
                curr->next = list2;
                temp = curr->next;
                curr = temp;
                list2 = list2->next;
            }
        }

        return head;
    }
};