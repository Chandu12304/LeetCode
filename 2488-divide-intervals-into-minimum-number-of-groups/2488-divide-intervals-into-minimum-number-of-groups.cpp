class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
        // Sweep Line Algorithm
        int mini= INT_MAX;
        int maxi= INT_MIN;
        for(int i=0;i<intervals.size();i++){
            mini=min(mini,intervals[i][0]);
            maxi=max(maxi,intervals[i][1]);
        }
        vector<int> eventCount(maxi+2,0);
        for(int i=0;i<intervals.size();i++){
            eventCount[intervals[i][0]]+=1;
            eventCount[intervals[i][1]+1]-=1;
        }
        int maxOverlaps=0;
        int sum=0;
        for(int i=mini;i<maxi+2;i++){
            sum+=eventCount[i];
            maxOverlaps= max(maxOverlaps,sum);
        }
        return maxOverlaps;
    }
};