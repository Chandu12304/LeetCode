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

// Count of the nodes in cycle
class Solution {
  public:
    // Function to find the length of a loop in the linked list.
    int countNodesinLoop(Node *head) {
        // Code here
        int cnt=1;
        if(head==NULL) return 0;
        ListNode *s= head;
        ListNode *f=head;
        while(f!=NULL and f->next!=NULL){
            f=f->next->next;
            s=s->next;
            if(f==s) break;
        }
        if(f==NULL or f->next==NULL) return 0;
        s=head;
        while(s!=f){
            s=s->next;
            f=f->next;
        }
        f=f->next;
        while(f!=s){
            f=f->next;
            cnt+=1;
        }
        return cnt;
    }
