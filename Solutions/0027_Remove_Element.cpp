class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> nums2;
        int i;
        for (i = 0; i < nums.size(); ++i) {
            if (nums.at(i) != val) {
                nums2.push_back(nums.at(i));
            }
        }

        for (i = 0; i < nums2.size(); ++i) {
            nums.at(i) = nums2.at(i);
        }

        return nums2.size();
    }
};