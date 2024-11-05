class Solution {
private:
    bool possible(vector<int> &arr, int k, int m){
        int sum=arr[0];
        int cntStud=1;
        for(int i=1;i<arr.size();i++){
            if((sum+arr[i])>m){
                sum=arr[i];
                cntStud++;
            }else sum+=arr[i];
        }
        if(cntStud>k) return true;
        return false;
    }
public:
    int splitArray(vector<int>& arr, int k) {
        if(k==1) return accumulate(arr.begin(),arr.end(),0);
        if(k>arr.size()) return -1;
        int l= *max_element(arr.begin(),arr.end());
        int h= accumulate(arr.begin(),arr.end(),0);
        while(l<=h){
            int m=(l+h)/2;
            if(possible(arr,k,m)) l=m+1;
            else h=m-1;
        }
        return l;
    }
};