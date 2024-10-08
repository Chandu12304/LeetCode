class Solution {
public:
    int reverse(int x) {
                int reversed = 0; 
        
        while (x != 0) {
            int digit = x % 10; 
            // A 32-bit signed integer ranges from -2^31 to 2^31 - 1 (i.e., from -2147483648 to 2147483647).
            if (reversed > INT_MAX / 10 || (reversed == INT_MAX / 10 && digit > 7)) return 0;  
            if (reversed < INT_MIN / 10 || (reversed == INT_MIN / 10 && digit < -8)) return 0;
            
            reversed = reversed * 10 + digit; 
            x = x / 10;
        }
        
        return reversed;
    }
};