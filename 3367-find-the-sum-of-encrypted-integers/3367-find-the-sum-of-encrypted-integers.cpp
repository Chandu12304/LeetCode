class Solution {
public:
    int sumOfEncryptedInt(vector<int>& nums) {
        int sum=0;
        for(int x: nums){
            string s=to_string(x);
            char c=s[0];
            for(char a:s){
                c=max(c,a);
            }
            string str(s.size(), c); 
            sum+=stoi(str);
        }
        return sum;
    }
};