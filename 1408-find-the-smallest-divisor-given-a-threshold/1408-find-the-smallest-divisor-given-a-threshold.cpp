class Solution {
private:
    bool possible(vector<int>& nums, int threshold,int d){
        int sum=0;
        for(int x: nums){
            sum+=ceil((double)x/d);
        }
        return sum<=threshold;
    }
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int l= 1;
        int h= *max_element(nums.begin(),nums.end());
        while(l<=h){
            int d =(l+h)/2;
            if(possible(nums,threshold,d)) h=d-1;
            else l=d+1;
        }
        return l;
    }
};