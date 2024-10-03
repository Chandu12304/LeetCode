/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
// Mathematical
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL) return NULL;
        ListNode *s= head;
        ListNode *f=head;
        while(f!=NULL and f->next!=NULL){
            f=f->next->next;
            s=s->next;
            if(f==s) break;
        }
        if(f==NULL or f->next==NULL) return NULL;
        s=head;
        while(s!=f){
            s=s->next;
            f=f->next;
        }
        return s;
    }
};
