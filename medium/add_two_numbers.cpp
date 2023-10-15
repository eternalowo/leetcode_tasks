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
        
        ListNode *result = new ListNode();
        ListNode *head = result;

        int rem = 0;

        while(l1 || l2 || rem != 0) {
            
            int a = l1 ? l1->val : 0;
            int b = l2 ? l2->val : 0;

            int sum = a + b + rem;

            rem = sum / 10;

            result->next = new ListNode(sum % 10);

            result = result->next;

            l1 = l1 ? l1->next : nullptr;
            l2 = l2 ? l2->next : nullptr;

        }

        return head->next;
    }
};