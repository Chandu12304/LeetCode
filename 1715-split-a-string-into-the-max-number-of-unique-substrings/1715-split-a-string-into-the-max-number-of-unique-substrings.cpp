class Solution {
public:
int maxUniqueSplit(string s) {
        int maxCount = 0;
        unordered_set<string> uset;
        backtrack(s, uset, 0, maxCount);
        return maxCount;
    }

    void backtrack(const string& s, unordered_set<string>& uset, int index, int& maxCount) {
        int n = s.length();
        if (index == n) {
            // Update maxCount only when we've split the string into unique parts
            maxCount = max(maxCount, static_cast<int>(uset.size())); 
            return;
        }
        // Try splitting from 'index' to 'i'
        for (int i = index; i < n; ++i) {
            string sub = s.substr(index, i - index + 1);
            if (uset.find(sub) == uset.end()) { // If the substring is unique
                uset.insert(sub);               // Add the substring to the set
                backtrack(s, uset, i + 1, maxCount); // Recurse for the remaining string
                uset.erase(sub);                // Backtrack: remove substring for the next iteration
            }
        }
    }
};