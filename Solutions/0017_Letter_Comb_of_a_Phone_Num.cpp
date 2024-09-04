class Solution {
public:
    // O(4^n)
    vector<string> letterCombinations(string digits) {
        vector<string> ans;

        if (digits.size() == 0) {
            return ans;
        }

        unordered_map<int, string> hashmap;
        hashmap[2] = "abc";
        hashmap[3] = "def";
        hashmap[4] = "ghi";
        hashmap[5] = "jkl";
        hashmap[6] = "mno";
        hashmap[7] = "pqrs";
        hashmap[8] = "tuv";
        hashmap[9] = "wxyz";

        string combo;
        int i = 0;

        solve(digits, hashmap, combo, i, ans);

        return ans;
    }

private:
    // backtracking
    void solve(const string& digits, const unordered_map<int, string>& hashmap, string combo, int i, vector<string> &ans) {
        // valid
        if (i >= digits.size()) {
            ans.push_back(combo);
            return;
        }

        int key = digits[i] - '0';
        string value = hashmap.at(key);

        // iterate through each letter value of each digit
        for (int j = 0; j < value.size(); ++j) {
            // push letter to combo
            combo.push_back(value[j]);
            // recursion
            solve(digits, hashmap, combo, i + 1, ans);
            // pop letter from combo
            combo.pop_back();
        }
    }
};