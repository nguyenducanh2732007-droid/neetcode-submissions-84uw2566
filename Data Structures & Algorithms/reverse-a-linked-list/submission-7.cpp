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
        ListNode* prev1 = nullptr;
        ListNode* prev2 = nullptr;
        while(head){
            prev2 = prev1;
            prev1 = head;
            head = head->next;
            // prev1->next = nullptr;
            prev1->next = prev2;
        }
        return prev1;
    }
};
