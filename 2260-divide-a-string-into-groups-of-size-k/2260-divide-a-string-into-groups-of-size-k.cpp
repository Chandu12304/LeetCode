class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        int n=s.size();
        int r=n%k;
        if(r!=0) s.append(k-r,fill);
        int m=s.size();
        vector<string> ans;
        for(int i=0;i<m;i+=k){
            ans.push_back(s.substr(i,k));
        }
        return ans;
    }
};