class Solution {
public:
    int search(vector<int>& nums, int target) {
        int h= nums.size()-1;
        int l=0;
        while(l<=h){
            int m = (h+l)/2;
            if(nums[m]==target) return m;
            else if(nums[m]<target) l= m+1;
            else h= m-1;
        }
        return -1;
    }
};