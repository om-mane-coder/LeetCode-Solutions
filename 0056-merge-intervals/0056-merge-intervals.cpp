class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        //lets sort those start times given in hte increasing order

        sort(intervals.begin(),intervals.end());

        vector<vector<int>>ans;

        int start = intervals[0][0];
        int end = intervals[0][1];

        for(int i = 1; i < intervals.size(); i++)
        {
            if(end >= intervals[i][0])
            {
                end = max(end, intervals[i][1]);
            }
            else
            {
                ans.push_back({start,end});

                start = intervals[i][0];
                end = intervals[i][1];
            }
        }

        // Add the last interval
        ans.push_back({start,end});

        return ans;

    }
};