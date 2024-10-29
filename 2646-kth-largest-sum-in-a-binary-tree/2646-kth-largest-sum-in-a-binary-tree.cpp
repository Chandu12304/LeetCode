/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    long long kthLargestLevelSum(TreeNode* root, int k) {
        queue<TreeNode*> q;
        priority_queue<long long,vector<long long>,greater<long long>> pq;
        if(!root) return -1;
        q.push(root);
        while(!q.empty()){
            int size= q.size();
            long long sum=0;
            for(int i=0;i<size;i++){
                TreeNode* node=q.front();
                sum+=node->val;
                if(node->left!=NULL) q.push(node->left);
                if(node->right!=NULL) q.push(node->right);
                q.pop();
            }
            pq.push(sum);
            if(pq.size()>k) pq.pop();
        }
        if(k>pq.size()) return -1;
        return pq.top();
    }
};