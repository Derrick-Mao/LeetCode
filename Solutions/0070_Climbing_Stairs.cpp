class Solution {
public:
    int climbStairs(int n) {
        // if n less than 4 return n as number of distinct ways to climb to top
        if (n <= 3) {
            return n;
        }

        // initiate vector from 0 to n (n+1 size); then the values at first 3 indexes as 0, 1, 2 in that order
        vector<int> dp (n+1, 0);
        dp.at(1) = 1;
        dp.at(2) = 2;

        // value at index i >= 3 is equal to the sum of the values at the previous 2 indexes
        int i;
        for (i = 3; i <= n; ++i) {
            dp.at(i) = dp.at(i-1) + dp.at(i-2);
        }

        return dp.at(n);
    }
};