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

// Optimal
class Solution {
private:
    // Optimized totalHours function
    bool canEatInTime(const vector<int>& piles, int k, int h) {
        long total = 0;  // Using long to prevent overflow
        for(int x : piles) {
            // More efficient division and ceiling
            total += (x + k - 1) / k;  // Equivalent to ceil(x/k) but faster
            if(total > h) return false;  // Early return if exceeds h
        }
        return true;
    }
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int lw = 1;
        // No need for min_element since we start from 1
        int hi = *max_element(piles.begin(), piles.end());
        
        // Don't need to maintain mini variable
        while(lw < hi) {  // Changed condition to avoid one extra iteration
            int k = lw + (hi - lw)/2;  // Prevents potential integer overflow
            
            if(canEatInTime(piles, k, h)) {
                hi = k;  // k might be the answer
            } else {
                lw = k + 1;
            }
        }
        return lw;  // lw will be the minimum valid k
    }
};
