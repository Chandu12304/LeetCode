class Solution {
private:
    bool flowersBloomed(vector<int>& bloomDay, int mid, int k,int m){
        int cnt = 0;  // consecutive bloomed flowers
        int bouquets = 0;  // total bouquets made
        
        for(int x: bloomDay) {
            if(x <= mid) {  // flower has bloomed by day 'mid'
                cnt++;
                if(cnt == k) {
                    bouquets++;
                    cnt = 0;  // reset count for next bouquet
                }
            } else {
                cnt = 0;  // reset count if sequence breaks
            }
        }
        return bouquets >= m;
    }
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        // Check if impossible
        if((long long)m * k > n) return -1;
        int l= *min_element(bloomDay.begin(),bloomDay.end());
        int h= *max_element(bloomDay.begin(),bloomDay.end());
        while(l<=h){
            int mid=(l+h)/2;
            if(flowersBloomed(bloomDay,mid,k,m)) h=mid-1;
            else l=mid+1;
        }
        return l;
    }
};