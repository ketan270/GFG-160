class Solution {
  public:
    int minRemoval(vector<vector<int>>& intervals) {
      int cnt = 0;
    sort(intervals.begin(), intervals.end());

    int end = intervals[0][1];
    for (int i = 1; i < intervals.size(); i++) {

        if (intervals[i][0] < end) {
          
              cnt++;
            end = min(intervals[i][1], end);
        }
          
        else
            end = intervals[i][1];
    }

    return cnt;
}

};
