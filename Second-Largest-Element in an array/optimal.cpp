class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
        // Code Here
        if(arr.size()<2) return -1;
        int s=-1;
        int l=-1;
        for(int i=0;i<arr.size();i++){
            if(l<arr[i]){
                s=l;
                l=arr[i];
            } 
            else if(arr[i]!=l && arr[i]>s) s=arr[i];
        }
        return s;
    }
};
