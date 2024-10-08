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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (!head) return nullptr;  // If the list is empty, return nullptr.

        ListNode *s = head, *f = head;
        ListNode *prev = nullptr;

        // Move the fast pointer `n` steps ahead
        for (int i = 0; i < n; i++) {
            f = f->next;
        }

        // Traverse with both `s` (slow) and `f` (fast) pointers
        // When `f` reaches the end, `s` will be at the nth node from the end
        while (f != nullptr) {
            prev = s;
            s = s->next;
            f = f->next;
        }

        // If `prev` is still null, it means we need to delete the head node
        if (prev == nullptr) {
            ListNode *temp = head;
            head = head->next;
            delete temp;
            return head;
        }

        // Delete the nth node from the en
        prev->next = s->next;
        delete s;

        return head;
    }
};

/** -----s------f  == s----f----------
       /\    /\       /\    /\
       |      |       |     |
         - n -         - n -             **/
