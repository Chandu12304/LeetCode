// Brute
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n= (nums.size()/2);
        vector<int> pos;
        vector<int> neg;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0) neg.push_back(nums[i]);
            else pos.push_back(nums[i]);
        }
        for(int i=0;i<n;i++){
            ans.push_back(pos[i]);
            ans.push_back(neg[i]);
        }
        return ans;
    }
};
// Optimal:- TWo pointers with S.C:-O(n)
