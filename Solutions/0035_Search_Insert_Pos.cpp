class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low = 0;
        int mid;
        int high = nums.size();

        if (target > nums.at(high-1)) {
            return high;
        }

        // binary search
        while (low <= high) {
            mid = (low + high) / 2;

            if (target == nums.at(mid)) {
                return mid;
            }

            else if (target < nums.at(mid)) {
                high = mid - 1;
            }

            else {
                low = mid + 1;
            }
        }

        return low;

    }
};