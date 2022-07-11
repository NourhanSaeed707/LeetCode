class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<int> v;
        vector<vector<int> > merge;
        if (intervals.size() <= 1)
            return intervals;
        sort(intervals.begin(), intervals.end());
        for (int i = 1; i < intervals.size(); i++) { // row
            if (i == 1 && intervals[i - 1][0] <= intervals[i][0] &&
            intervals[i - 1][1] <= intervals[i][1] && intervals[i - 1][1] >= intervals[i][0]) {
                intervals[i][0] = intervals[i - 1][0];
                intervals[i - 1][0] = -1;
                intervals[i - 1][1] = -1;                
           }
           else if (i -1 >=0 && intervals[i - 1][0] <= intervals[i][0] &&
                intervals[i - 1][1] <= intervals[i][1] && intervals[i - 1][1] >= intervals[i][0]) {
                intervals[i][0] = intervals[i - 1][0]; 
                intervals[i - 1][0] = -1;
                intervals[i - 1][1] = -1;
            }
           else if (i - 1 >= 0 && intervals[i - 1][1] > intervals[i][1]) {
                intervals[i][0] = intervals[i - 1][0];
                intervals[i][1] = intervals[i - 1][1];
                intervals[i - 1][0] = -1;
                intervals[i - 1][1] = -1;
            }
        }
        for (int i = 0; i < intervals.size(); i++) { // row
            if (intervals[i][0] != -1 && intervals[i][1] != -1) {
                v.push_back(intervals[i][0]);
                v.push_back(intervals[i][1]);
                merge.push_back(v);
                v.clear();
            }
        }
        return merge;
    }
};
