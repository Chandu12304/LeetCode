class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        int l=1;
        int h=n-2;
        if(n==1) return 0;
        while(l<=h){
            int mid=(l+h)/2;
            if(nums[mid-1]<nums[mid] && nums[mid]>nums[mid+1]) return mid;
            else if(nums[mid]<nums[mid+1]) l=mid+1;
            else h=mid-1;
        }
        // this implies either ascending order
        if(nums[0]>nums[1]) return 0;
        // or descending order
        else return n-1;
    }
};