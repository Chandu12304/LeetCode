class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i=0;
        int j=1;
        int profit=0;
        while(j<prices.size()){
            if(prices[j]<prices[i]){
                i=j;
                j+=1;
                continue;
            }
            profit=max(profit,(prices[j]-prices[i]));
            j+=1;
        }
        return profit;
    }
};