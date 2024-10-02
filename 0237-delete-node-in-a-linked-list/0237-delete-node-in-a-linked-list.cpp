/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
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