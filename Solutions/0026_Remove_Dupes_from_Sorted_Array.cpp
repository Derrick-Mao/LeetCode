class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        /*      
        for (int i = 0; i < nums.size()-1; ++i) {
            while (nums.at(i+1) == nums.at(i)) {
                nums.erase(nums.begin()+i+1);
                if (nums.size() == i+1) break;
            }
        }

        return nums.size();
        */

        set<int> unique;
        for (int  i: nums) {
            unique.insert(i);
        }

        int j = 0;
        for (int i: unique) {
            nums.at(j) = i;
            ++j;
        }

        return unique.size();
    }
};