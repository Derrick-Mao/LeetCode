/*
1. Two Sum
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.
You can return the answer in any order.
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i;
        int size = nums.size();
        int diff;
        unordered_map<int, int> indexNums;
        vector<int> answer;

        for (i = 0; i < size; ++i) {    //O(n)
            diff = target - nums.at(i); //O(1)

            if (indexNums.find(diff) != indexNums.end()) {  //O(1)
                answer.push_back(indexNums[diff]);
                answer.push_back(i);
                return answer;
            }
            
            indexNums[nums[i]] = i; //O(1)
        }

        return answer;
    }
};

/*
Time complexity: O(n) * O(1) * O(1) * O(1) = O(n)
*/
