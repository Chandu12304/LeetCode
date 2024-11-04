class Solution {

public:
    int findKthPositive(vector<int>& arr, int k) {
        // Brute (linear) :- O(n)
       /* int val=k;
        for(int x: arr){
            if(val<x) return val;
            val++;
        }
        return val; */

        // Optimal (Binary search)
        int l=0;
        int h=arr.size()-1;
        while(l<=h){
            int m=(l+h)/2;
            int missing = arr[m]-(m+1);
            if(missing<k) l=m+1;
            else h=m-1;
        }
        return l+k;
    }
};