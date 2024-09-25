class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        if(nums.size()<2) return;
        int i=0;
        while( i<nums.size() && nums[i]!=0) i+=1;
        if(i>nums.size()) return;
        int j=i+1;
        while(j<nums.size()){
            if(nums[j]!=0){
                swap(nums[i],nums[j]);
                i+=1;
            }
            j+=1;
        }
    }
};