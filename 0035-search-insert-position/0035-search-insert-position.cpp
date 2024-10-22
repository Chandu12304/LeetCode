class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        // sorted array and involves searching a pos => Binary Search
        int l=0;
        int h= nums.size()-1;
        int i=-1;
        while(l<=h){
            int m= (l+h)/2;
            if(nums[m]==target) return m;
            else if(nums[m]<target){
                i=m;
                l=m+1;
            }
            else h=m-1;
        }
        return i+1;
    }
};