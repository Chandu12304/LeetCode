class Solution {
public:
    int findMin(vector<int>& nums) {
        int l=0;
        int h=nums.size()-1;
        int mini=INT_MAX;
        while(l<=h){
            int mid=(l+h)/2;
            mini = min(mini,nums[mid]);
            if(nums[l]<=nums[mid]){
                if(nums[l]<nums[h]) h=mid-1;
                else l=mid+1;
            }
            else h=mid-1;
        }
        return mini;
    }
};