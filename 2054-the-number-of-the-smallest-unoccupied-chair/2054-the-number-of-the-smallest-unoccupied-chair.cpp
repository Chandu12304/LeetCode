class Solution {
public:
    int smallestChair(vector<vector<int>>& times, int targetFriend) {
        int targetArrival = times[targetFriend][0];
        
        // Sort the friends based on their arrival time.
        sort(times.begin(), times.end());

        // Priority queue for occupied chairs (leaving time, chair index).
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> occupied;

        // Priority queue for available chairs.
        priority_queue<int, vector<int>, greater<int>> available;

        int chair = 0;  // To assign new chairs.

        for (const auto& time : times) {
            int arrTime = time[0];
            int leavingTime = time[1];

            // Free up the chairs for friends that have left.
            while (!occupied.empty() && occupied.top().first <= arrTime) {
                available.push(occupied.top().second);
                occupied.pop();  // Remove from occupied after chair becomes available.
            }

            int currentChair;

            // Assign an available chair or a new one if none are available.
            if (available.empty()) {
                currentChair = chair;
                chair += 1;  // Increment chair count for new chair assignment.
            } else {
                currentChair = available.top();
                available.pop();
            }

            // Check if the current friend is the target friend.
            if (arrTime == targetArrival) {
                return currentChair;
            }

            // Mark the current chair as occupied until the friend leaves.
            occupied.push({leavingTime, currentChair});
        }

        return -1;  // Should not reach here.
    }
};