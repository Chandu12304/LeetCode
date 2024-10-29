class Solution {
private:
    int lowerBound(int low, int high, vector<int>& nums,int target){
        int l=-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]>=target){
                l=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
        return l;
    }
    int upperBound(int low, int high, vector<int>& nums,int target){
        int u=-1;
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid]<=target){
                u=mid;
                low=mid+1;
            } 
            else high=mid-1;
        }
        return u;
    }
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        int n=nums.size()-1;
        if(n<0){
            ans.push_back(-1);
            ans.push_back(-1);
            return ans;
        }
        int l=lowerBound(0,n,nums,target);
        int u=upperBound(0,n,nums,target);
        if(l==-1 || nums[l]!= target) l=-1;
        if(u==-1 || nums[u]!=target) u=-1;
        ans.push_back(l);
        ans.push_back(u);
        return ans;
    }
};