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
    // https://leetcode.com/problems/merge-k-sorted-lists/
    // Complexity: O(m*n)
public:
    ListNode* mergeKLists(std::vector<ListNode*>& lists) {
        ListNode* result = nullptr;
        ListNode** current = &result;
        std::size_t null_count = 0;

        while (null_count != lists.size()) {
            std::size_t index = 0;
            std::size_t min_index = 0;
            ListNode* min_node = nullptr;
            int min_value = INT_MAX;

            for (auto node : lists) {
                if (node && node->val < min_value) {
                    min_value = node->val;
                    min_index = index;
                    min_node = node;
                }
                ++index;
            }

            if (min_node) {
                *current = new ListNode(min_node->val);
                current = &((*current)->next);
                lists[min_index] = min_node->next;
            }
            else {
                ++null_count;
            }
        }

        return result;
    }
};