class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        // nums % 2 == 0
        // +num = -num

        int left = 0;
        int right = 1;
        vector<int> sol(nums.size(), 0);

        for (auto num: nums) {
            if (num >= 0) {
                sol[left] = num;
                left+=2;
            }

            else {
                sol[right] = num;
                right+=2;
            }
        }

        return sol;
    }
};