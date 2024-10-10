class Solution {
public:
    int fib(int n) {
    // Base cases
    if (n == 0) return 0;  // F(0) = 0
    if (n == 1) return 1;  // F(1) = 1

    // Recursive case
    return fib(n - 1) + fib(n - 2);
    }
};