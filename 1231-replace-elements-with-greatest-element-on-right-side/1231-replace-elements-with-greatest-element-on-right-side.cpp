class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int> ans;
        ans.push_back(-1); 
        if(arr.size()<2) return ans;
        int i= arr.size()-2;
        int j= arr.size()-1;
        while(i>=0){
            ans.push_back(arr[j]);
            if(arr[i]>arr[j]) j=i;
            i-=1;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};