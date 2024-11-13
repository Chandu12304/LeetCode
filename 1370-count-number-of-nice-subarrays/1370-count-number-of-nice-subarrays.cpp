class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        int i = 0, cnt = 0, len = 0, last = 0;

        for (int j = 0; j < n; ++j) {
            if (nums[j] % 2 != 0) cnt++;  // Count odd numbers

            // If we have more than k odd numbers, move `i` to reduce the count
            while (cnt > k) {
                if (nums[i] % 2 != 0) cnt--;
                i++;
            }

            // When we have exactly k odd numbers, count valid subarrays
            if (cnt == k) {
                last = i;
                while (last < n && nums[last] % 2 == 0) last++;
                len += (last - i + 1);  // Count subarrays ending at j
            }
        }

        return len;
    }
};
