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
    ListNode* reverseList(ListNode* head) {
        if(head == NULL or head->next == NULL) return head;
        ListNode* n = new ListNode(head->val);
        ListNode* temp;
        temp = n;
        head = head->next;
        do {
            n = new ListNode(head->val, temp);
            temp = n;
            head = head->next;
        } while(head != NULL);

        return n;
    }
};