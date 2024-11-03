class Solution {
private:
    int totalHours(vector<int>& piles,int k,int h){
        int total=0;
        for(int x : piles){
            // imp. int overflow
            if(total>h) break;
            // type casting is important
            total+= ceil((double)x/k);
        }
        return total;
    }
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int lw=1;
        int hi= *max_element(piles.begin(),piles.end());
        int mini=hi;
        while(lw<=hi){
            int k=(lw+hi)/2;
            int total = totalHours(piles,k,h);
            // the below logic depends on the question 
            if(total<=h){
                mini=k;
                hi=k-1;
            }
            else lw=k+1;
        }
        return mini;
    }
};