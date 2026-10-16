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
    ListNode* reorderList(ListNode* head) {
        ListNode* slow; ListNode* fast;
        slow = head; fast = head;
        ListNode dummy; ListNode* tail; tail = &dummy;
        while(fast and fast->next){
            tail->next = slow;
            head = slow->next;
            slow = slow->next; 
            fast = fast->next->next;
            tail = tail->next;
            ListNode* a = new ListNode();
            tail->next = a; tail = tail->next;
        }
        if(fast){
            head = head->next; tail->next = slow; tail = tail->next; tail->next = nullptr;
        }
        vector<int> vt;
        while(head){
            vt.push_back(head->val);
            head = head->next;
        }
        ListNode* point = dummy.next->next;
        for(int i = vt.size() - 1; i >=0 and point ; i--){
            point->val = vt[i];
            point = point->next->next;
        }
        return dummy.next;
    }
};
