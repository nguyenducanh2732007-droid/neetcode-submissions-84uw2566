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
        ListNode* n;
        ListNode* tail;
        ListNode* tem;
        n = new ListNode;
        n = head;
        tail = new ListNode;
        tail->next = NULL;
        tail->val = n->val;
        tem = tail;
        do{
            n = n->next;
            tail = new ListNode;
            tail->val = n->val;
            tail->next = tem;
            tem = tail;
        } while(n->next != NULL);

        return tail;
    }
};