class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
       sort(intervals.begin(), intervals.end());
        int c = 0, prevEnd = intervals[0][1]; 
        for(int i = 1; i < intervals.size(); i++){
          if (intervals[i][0] >= prevEnd )
              prevEnd = intervals[i][1];
         else{
                c++;
                prevEnd = min(intervals[i][1], prevEnd);
            }
        }
        return c;
    }
};
