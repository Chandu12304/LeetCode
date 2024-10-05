class Solution {
public:
    int strStr(string haystack, string needle) {
        int s = needle.size();
        int l = haystack.size();

        // Edge cases
        if (s == 0) return 0;
        if (s > l) return -1;

        // Bad character heuristic map (rightmost position of characters in needle)
        map<char, int> mp;
        for (int i = 0; i < s; i++) {
            mp[needle[i]] = i;
        }

        int j = 0; // Pointer in haystack
        while (j <= l - s) {
            int i = s - 1; // Pointer in needle

            // Compare needle with current substring in haystack
            while (i >= 0 && needle[i] == haystack[j + i]) {
                i--;
            }

            // If needle is found
            if (i < 0) return j;

            // Use bad character heuristic to determine jump length
            if (mp.find(haystack[j + i]) != mp.end()) {
                j += max(1, i - mp[haystack[j + i]]);
            } else {
                j += i + 1;
            }
        }
        
        return -1;
    }
};
