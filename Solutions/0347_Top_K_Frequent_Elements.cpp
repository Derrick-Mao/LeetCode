class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> solution;
        unordered_map<int, int> hashmap;

        // key=num, value=count
        for (int i = 0; i < nums.size(); ++i) {
                ++hashmap[nums[i]];
        }

        vector<pair<int, int>> vec(hashmap.begin(), hashmap.end());
        
        // sort pairs by frequency in descending order 
        sort(vec.begin(), vec.end(), [](const pair<int, int>&a, const pair<int, int>&b) {
            return a.second > b.second;
        });

        // push k most frequent
        for (int i = 0; i < k; ++i) {
            solution.push_back(vec[i].first);
        }

        return solution;
    }
};