class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> combinations;
        vector<int> combo;

        combineHelper(combinations, combo, n, k, 1);
        
        return combinations;
    }

private:
    //backtracking
    void combineHelper(vector<vector<int>>& combinations, vector<int>& combo, int n, int k, int i) {
        // if valid push and return
        if (combo.size() == k) {
            combinations.push_back(combo);
            return;
        }

        // for all choices
        for (int j = i; j <= n; ++j) {
            combo.push_back(j);
            combineHelper(combinations, combo, n, k, j + 1);
            combo.pop_back();
        }
    }
};

        // n! / (k! (n - k)!)

        // int nSubK = n - k;

        // int nFac = n;
        // int kFac = k;
        // int nSubKFac = nSubK;

        // while (n > 1) {
        //     --n;
        //     nFac = nFac * n;
        // }

        // while (k > 1) {
        //     --k;
        //     kFac = kFac * k;
        // }

        // while (nSubK > 1) {
        //     --nSubK;
        //     nSubKFac = nSubKFac * nSubK;
        // }

        // combination = (nFac / (kFac * nSubKFac));