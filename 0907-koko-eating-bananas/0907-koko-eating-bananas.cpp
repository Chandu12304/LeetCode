class Solution {
private:
    int totalHours(vector<int>& piles,int k,int h){
        int total=0;
        for(int x : piles){
            if(total>h) break;
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
            if(total<=h){
                mini=k;
                hi=k-1;
            }
            else lw=k+1;
        }
        return mini;
    }
};