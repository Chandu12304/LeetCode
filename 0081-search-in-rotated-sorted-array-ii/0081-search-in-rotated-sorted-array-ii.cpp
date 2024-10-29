class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int l=0;
        int h= nums.size()-1;
        while(l<=h){
            int mid=(l+h)/2;
            while(l<mid && nums[l]==nums[mid]) l++;
            while(h>mid && nums[h]==nums[mid]) h--;
            if(nums[mid]==target) return true;
            // if left sorted
            if(nums[l]<=nums[mid]){
                if(nums[l]<=target && nums[mid]>target) h=mid-1;
                else l=mid+1;
                continue;
            }
            // if right sorted
            if(nums[mid]<nums[h]){
                if(nums[mid]<target && nums[h]>=target) l=mid+1;
                else h=mid-1;
            }
        }
        return false;
    }
};