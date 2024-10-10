class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        int val=x;
        int pal=0;
        while(val!=0){
            int digit =val%10;
            // Check if appending the digit will cause overflow
            if (pal > INT_MAX / 10 || (pal == INT_MAX / 10 && digit > 7)) return false;
            pal= pal*10 + digit;
            val=val/10;
        }
        if(pal==x) return true;
        return false;
    }
};