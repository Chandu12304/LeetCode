/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
// Brute O(n)
class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode *ptr= node->next;
        while(ptr->next!=NULL){
            node->val = ptr->val;
            node = node->next;
            ptr = ptr->next;
        }
        node->val = ptr->val;
        node->next=NULL;
    }
};

// Optimal O(1)
class Solution {
public:
    void deleteNode(ListNode* node) {
        node->val = node->next->val;
        node->next= node->next->next;
    }
};
