class Solution {

public:
    int findKthPositive(vector<int>& arr, int k) {
        // Brute (linear) :- O(n)
        int val=k;
        for(int x: arr){
            if(val<x) return val;
            val++;
        }
        return val;
    }
};