class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows < 2) {
            return s;
        }

        string ans;
        vector<string> pattern(numRows, "");
        int currRow = 0;
        bool edge = false;

        for (int i = 0; i < s.size(); ++i) {
            // flip direction when reaching top or bottom edge
            if (currRow == 0 || currRow == numRows - 1) {
                edge = !edge;
            }

            pattern.at(currRow) += s[i];

            currRow += edge ? 1 : -1;
        }

        // add each pattern line to ans
        for (int i = 0; i < numRows; ++i) {
            ans += pattern.at(i);
        }

        return ans;
    }
};