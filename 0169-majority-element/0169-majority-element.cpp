class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> mp;
        int maxi=0;
        int el;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]+=1;
            if(mp[nums[i]]>maxi){
                maxi=max(maxi,mp[nums[i]]);
                el=nums[i];
            }
        }
        return el;
    }
};