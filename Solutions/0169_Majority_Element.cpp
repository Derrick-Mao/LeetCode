class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // majority element always exist and appears more than n/2 times
        int count = 0;
        int major;

        // moore voting alg
        for (int i = 0; i < nums.size(); ++i) {
            if (count == 0) {
                major = nums[i];
                ++count;
            }

            else if (major == nums[i]) {
                ++count;
            }

            else {
                --count;
            }
        }

        return major;
    }
};