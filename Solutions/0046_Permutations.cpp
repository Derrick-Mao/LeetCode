class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        // n! / (n - k)!
        vector<vector<int>> permutations;
        vector<int> perm;
        vector<bool> used (nums.size(), false);
        
        permuteHelper(permutations, perm, nums, used);

        return permutations;
    }

private:
    // backtracking
    void permuteHelper(vector<vector<int>>& permutations, vector<int>& perm, vector<int>& nums, vector<bool> used) {
        if (perm.size() == nums.size()) {
            permutations.push_back(perm);
            return;
        }

        for (int j = 0; j < nums.size(); ++j) {
            // skip repeated numbers in the perm
            if (used.at(j) == true) {
                continue;
            }

            perm.push_back(nums.at(j));
            used.at(j) = true;

            permuteHelper(permutations, perm, nums, used);

            perm.pop_back();
            used.at(j) = false;
        }
    }
};