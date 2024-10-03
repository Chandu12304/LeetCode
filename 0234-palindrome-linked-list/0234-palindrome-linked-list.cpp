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
    bool isPalindrome(ListNode* head) {
        if(!head) return false;
        vector<int> revArr;
        vector<int> arr;
        ListNode *ptr = head;
        while(ptr!=NULL){
            revArr.push_back(ptr->val);
            ptr=ptr->next;
        }
        arr = revArr;
        reverse(revArr.begin(),revArr.end());
        if(arr== revArr) return true;
        return false;
    }
};