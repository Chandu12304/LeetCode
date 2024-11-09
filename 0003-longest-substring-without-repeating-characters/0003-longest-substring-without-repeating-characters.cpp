class Solution {
public:
    int lengthOfLongestSubstring(string s) {
         if (s.size() == 0) return 0;

        int arr[256];
        fill(arr, arr + 256, -1); // Initialize all elements of arr to -1

        int i = 0, j = 0;
        int maxi = 0;

        while (j < s.size()) {
            // If character s[j] was seen before and is within the current window
            if (arr[s[j]] != -1 && arr[s[j]] >= i) {
                i = arr[s[j]] + 1; // Move 'i' to skip the repeated character
            }

            // Update the last index of the character and calculate the maximum length
            arr[s[j]] = j;
            maxi = max(maxi, j - i + 1);
            j++;
        }
        return maxi;
    }
};