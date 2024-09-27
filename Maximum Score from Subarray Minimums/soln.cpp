// Kadane's Algorithm
class Solution {
  public:
    // Function to find pair with maximum sum
    int pairWithMaxSum(vector<int> &arr) {
        // Your code goes here
        int maxi=0;
        for(int i=0;i<arr.size()-1;i++) maxi=max(maxi,(arr[i]+arr[i+1]));
        return maxi;
    }
};
