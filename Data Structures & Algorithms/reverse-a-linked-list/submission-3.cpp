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
        ListNode* n = head;
        ListNode* temp;
        head = head->next;
        n->next = NULL;
        temp = n;
        while(head != NULL){
            n = new ListNode(head->val, temp);
            temp = n;
            head = head->next;
        }

        return temp;
    }
};