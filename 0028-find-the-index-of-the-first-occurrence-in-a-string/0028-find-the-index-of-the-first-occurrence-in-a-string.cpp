class Solution {
public:
    int strStr(string haystack, string needle) {
        int s = needle.size();
        int l = haystack.size();

        // Edge cases
        if (s == 0) return 0; // If needle is empty
        if (s > l) return -1; // If needle is longer than haystack

        // Create a bad character shift table
        vector<int> shift(256, s); // Default shift to the size of needle
        for (int i = 0; i < s - 1; i++) { // Populate shift table for needle characters
            shift[needle[i]] = s - 1 - i; // Store distance from the end
        }

        int j = 0; // Pointer for haystack
        while (j <= l - s) { // While there's still enough room for needle in haystack
            int i = s - 1; // Start comparison from the end of needle
            
            // Compare needle with the current substring in haystack
            while (i >= 0 && needle[i] == haystack[j + i]) {
                i--;
            }

            // If needle is found
            if (i < 0) return j; // Match found at index j

            // Use the shift table for jumping ahead
            j += shift[haystack[j + s - 1]]; // Shift based on the last character in current substring
        }

        return -1; // No match found
    }
};
