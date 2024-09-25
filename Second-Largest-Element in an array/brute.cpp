class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
        // Code Here
       sort(arr.begin(),arr.end());
       for(int i=arr.size()-2;i>=0;i--){
           if(arr[i]<arr[arr.size()-1]) return arr[i];
    }
    return -1;
    }
};
// or
// find largest in one iteration and second largest in 2nd iteration 
