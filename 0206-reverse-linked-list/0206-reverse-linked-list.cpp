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
// Brute (T.C:- O(n), S.C:- O(n))
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(!head) return nullptr;
        ListNode *cur = new ListNode(head->val);
        ListNode *temp = head;
        temp=temp->next;
        while(temp!=NULL){
            ListNode *newNode = new ListNode(temp->val,cur);
            cur = newNode;
            temp=temp->next;
        }
        return cur;
    }
};

// Optimal [3 pointer approach for interview](T.C:- O(n), S.C:- O(1))
