class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       int i=0;
       int j=1;
       while(j<nums.size()){
            if(nums[j]!=nums[i]){
                nums[i+1]=nums[j];
                i+=1;
                j+=1;
            }else j+=1;
            
       }
       return i+1;
    }
};