class Solution {
public:
    int minDistance(string word1, string word2) {
        const int xLen = word1.length();
        const int yLen = word2.length();
        vector<vector<int>> dp (xLen + 1, vector<int> (yLen + 1, 0));
        
        int i, j;

        for (i = 0; i <= xLen; ++i) {
            dp[i][0] = i * 1;
        }

        for (j = 0; j <= yLen; ++j) {
            dp[0][j] = j * 1;
        }

        int replaceScore;
        int insertScore;
        int deleteScore;

        for (i = 1; i <= xLen; ++i) {
            for (j = 1; j <= yLen; ++j) {
                if (word1.at(i-1) == word2.at(j-1)) {
                    replaceScore = dp[i-1][j-1];
                }

                else {
                    replaceScore = dp[i-1][j-1] + 1;
                }

                insertScore = dp[i-1][j] + 1;
                deleteScore = dp[i][j-1] + 1;
                dp[i][j] = min(replaceScore, min(insertScore, deleteScore));
            }
        }

        return dp[xLen][yLen];
    }
};