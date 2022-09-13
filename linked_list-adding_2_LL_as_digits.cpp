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
        ListNode* dummyHead = new ListNode(0);
        ListNode* node = dummyHead;

        int carry = 0;
        for (ListNode *i = l1, *j = l2; i != nullptr || j != nullptr;) {
            int sum = carry;
            sum += (i == nullptr ? 0 : i->val);
            sum += (j == nullptr ? 0 : j->val);

            node->next = new ListNode(sum % 10);
            node = node->next;

            carry = sum / 10;
            i = (i == nullptr ? i : i->next);
            j = (j == nullptr ? j : j->next);
        }

        if (carry != 0) {
            node->next = new ListNode(carry);
        }
        return dummyHead->next;
    }
};
