class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // set<vector<int>> s;
        vector<vector<int>> ans;

        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); ++i) {
            // skip duplicates after 1st iteration
            if (i > 0 && nums[i] == nums[i-1]) {
                continue;
            }

            int j = i + 1, k = nums.size() - 1;

            // two pointers from i + 1 and last value;
            while (j < k) {
                // target sum < 0
                if (nums[j] + nums[k] < -nums[i]) {
                    ++j;
                }

                // target sum > 0
                else if (nums[j] + nums[k] > -nums[i]) {
                    --k;
                }

                // target sum == 0
                else {
                    ans.push_back({nums[i], nums[j], nums[k]});

                    // skip duplicates
                    while (j < k && nums[j] == nums[j+1]) {
                        ++j;
                    }
                    
                    // skip duplicates
                    while (j < k && nums[k] == nums[k-1]) {
                        --k;
                    }

                    ++j;
                    --k;
                }
            }
        }

        // push back ans with unique triplets, not needed bc duplicates skipped
        // for (auto triplets : s) {
        //     ans.push_back(triplets);
        // }

        return ans;
    }
};