class Solution {
public:
    string longestPalindrome(string s) {
        if (s.size() < 2) {
            return s;
        }

        string maxStr = s.substr(0,1);

        for (int i = 0; i < s.size(); ++i) {
            // accounts for odd palindrome
            string odd = expandArdCenter(s, i, i);
            // accounts for even palindrome
            string even = expandArdCenter(s, i, i + 1);

            if (odd.size() > maxStr.size()) {
                maxStr = odd;
            }

            if (even.size() > maxStr.size()) {
                maxStr = even;
            }
        }

        return maxStr;
    }

private:
    // expand outwards until left != right
    string expandArdCenter(string s, int left, int right) {
        while (left >= 0 && right < s.size() && s[left] == s[right]) {
            --left;
            ++right;
        }

        return s.substr(left + 1, right - left - 1);
    }
};