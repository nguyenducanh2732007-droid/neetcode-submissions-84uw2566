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
    ListNode* reverseLinkedList(ListNode* head){
        ListNode* prev = nullptr; ListNode* cur = head;
        while(cur){
            ListNode* next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
        }
        return prev;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode dummy; dummy.next = reverseLinkedList(head);
        ListNode* p = &dummy;
        int cnt = 1;
        while(p->next and cnt < n ){
            p = p->next;
            cnt++;
        }
        if(p->next) p->next = p->next->next;
        return reverseLinkedList(dummy.next);
    }
};
