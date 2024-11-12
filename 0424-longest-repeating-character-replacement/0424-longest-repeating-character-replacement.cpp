class Solution {
public:
    int characterReplacement(string s, int k) {
        int maxfreq=0;
        int maxi=0;
        int i=0;
        int j=0;
        int arr[256]={0};
        while(j<s.size()){
            arr[s[j]-'A']++;
            maxfreq=max(maxfreq,arr[s[j]-'A']);
            if((j-i+1)-maxfreq>k){
                arr[s[i]-'A']--;
                i++;
            }
            if((j-i+1)-maxfreq<=k) maxi=max(maxi,j-i+1);
            j++;
        }
        return maxi;
    }
};