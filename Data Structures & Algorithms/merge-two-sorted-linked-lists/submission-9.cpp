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
        ListNode* cur = nullptr;
        ListNode* head = nullptr;
        ListNode* tail = nullptr;
        ListNode* cur1 = list1;
        ListNode* cur2 = list2;
        if(!cur1) head = cur2;
        if(!cur2) head = cur1;
        while(cur1 and cur2){
            if(cur1->val <= cur2->val){
                cur = cur1; cur1 = cur1->next;
            }
            else {
                cur = cur2; cur2 = cur2->next;
            }
            if(!head){
                head = cur;
                tail = cur;
                continue;
            }
            tail->next = cur;
            tail = tail->next;
        }
        if(!cur1) cur = cur2;
        if(!cur2) cur = cur1;
        if(tail != nullptr) tail->next = cur;
        return head;
    }
};
