class Solution {
public:
    int romanToInt(string s) {
        int ans = 0;
        
        unordered_map<char, int> romanIntConv;
        romanIntConv['I'] = 1;
        romanIntConv['V'] = 5;
        romanIntConv['X'] = 10;
        romanIntConv['L'] = 50;
        romanIntConv['C'] = 100;
        romanIntConv['D'] = 500;
        romanIntConv['M'] = 1000;

        for (int i = 0; i < s.size(); ++i) {
            // current value is less than next value
            if (romanIntConv[s[i]] < romanIntConv[s[i+1]]) {
                ans -= romanIntConv[s[i]];
            }

            else {
                ans += romanIntConv[s[i]];
            }
        }

        return ans;
    }
};