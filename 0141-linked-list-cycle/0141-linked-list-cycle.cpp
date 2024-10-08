/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
// Floyd's Tortoise and hare technique
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL) return false;
        ListNode *s= head;
        ListNode *f=head;
        while(f!=NULL and f->next!=NULL){
            f=f->next->next;
            s=s->next;
            if(f==s) break;
        }
        if(f==NULL or f->next==NULL) return false;
        return true;
    }
};
