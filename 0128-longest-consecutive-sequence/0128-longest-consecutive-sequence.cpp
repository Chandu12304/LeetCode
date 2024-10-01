class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        sort(nums.begin(),nums.end());
        int cnt=1;
        int lng=1;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]) continue;
            else{
                if(nums[i+1]==nums[i]+1) cnt+=1;
                else cnt=1;
            }
            lng=max(lng,cnt);
        }
        return lng;
    }
};