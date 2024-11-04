class Solution {
private:
    bool possible(vector<int>& weights, int days, int c){
        // minimum 1 day is compulsory
        int d=1;
        int sum=0;
        for(int x: weights){
            // important logic
            if(sum + x > c){
                d++;
                sum=x;
            }
            else sum+=x; 
        }
        return d<=days;
    }
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int l= *max_element(weights.begin(),weights.end());
        int h = accumulate(weights.begin(),weights.end(),0);
        while(l<=h){
            int c = (l+h)/2;
            if(possible(weights,days,c)) h=c-1;
            else l=c+1;
        }
        return l;
    }
};