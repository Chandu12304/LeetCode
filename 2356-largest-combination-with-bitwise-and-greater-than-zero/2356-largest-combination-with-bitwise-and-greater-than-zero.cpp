class Solution {
public:
    int largestCombination(vector<int>& candidates) {
        int maxi=0;
        // given candidates[i] <= 10^7 :- no. of bits possible 24
        for(int i=0;i<=24;i++){
            int setBits=0;
            for(int c: candidates){
                setBits+= (c>>i)&1; 
            }
            maxi = max(maxi,setBits);
        }
        return maxi;
    }
};
