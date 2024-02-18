class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;
        int mid;
        vector<int> sol(2, -1);

        if (high == -1) {
            return sol;
        }

        //search for left
        while (low < high) {
            mid = (low + high) / 2;

            if (target > nums.at(mid)) {
                low = mid + 1;
            }

            else {
                high = mid;
            }
        }

        // target not in nums
        if (target != nums.at(low)) {
            return sol;
        }

        else {
            sol.at(0) = low;
        }

        //search for right
        high = nums.size() - 1;
        while (low < high) {
            mid = (low + high) / 2 + 1;

            if (target < nums.at(mid)) {
                high = mid - 1;
            }

            else {
                low = mid;
            }
        }

        sol.at(1) = high;
        return sol;
    }
};