// Brute
class Solution {
private:
    void recursionPermutaion(vector<int>& nums, vector<int>& carry,vector<vector<int>>& ans,vector<bool>& used){
        if(carry.size()==nums.size()){
            ans.push_back(carry);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(used[i]) continue;
            carry.push_back(nums[i]);
            used[i]=true;
            recursionPermutaion(nums,carry,ans,used);
            carry.pop_back();
            used[i]=false;
        }
    }
public:
    void nextPermutation(vector<int>& nums) {
        vector<int> carry;
        vector<vector<int>> ans;
        vector<bool> used(nums.size(),false);
        recursionPermutaion(nums,carry,ans,used);
        sort(ans.begin(),ans.end());
        ans.erase(unique(ans.begin(), ans.end()), ans.end());
        auto it = find(ans.begin(),ans.end(),nums);
        if(it!=ans.end()){
            if((it+1)==ans.end()) nums = ans[0];
            else nums = *(it+1);
        }
    }
};

// Optimal
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int i;
        int j;
        for(i = nums.size()-2;i>=0;i--){
            if(nums[i]<nums[i+1]) break;
        }
        if(i<0){
            reverse(nums.begin(),nums.end());
            return;
        } 
        for(j=nums.size()-1;j>i;j--){
            if(nums[j]>nums[i]){
                swap(nums[i],nums[j]);
                break;
            } 
        }
        sort(nums.begin()+(i+1),nums.end());
    }
};
