class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> merged;

        sort(begin(intervals), end(intervals));

        int a = intervals[0][0];
        int b = intervals[0][1];

        for (auto i : intervals) {
            if (i[0] > b) {
                merged.push_back({a,b});
                a = i[0];
                b = i[1];
            }

            else if (b < i[1]) {
                b = i[1];
            }
        }

        merged.push_back({a,b});
        return merged;
    }
};