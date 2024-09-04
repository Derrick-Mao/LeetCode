class Solution {
public:
    int myAtoi(string s) {
        int ans = 0;
        string temp;
        bool positive = true;
        int i = 0;

        // leading white space
        while (i < s.size() && s.at(i) == ' ') {
            ++i;
        }

        // + or -
        if (i < s.size() && (s.at(i) == '+' || s.at(i) == '-')) {
            positive = (s.at(i) == '+');
            ++i;
        }

        // find numbers
        while (i < s.size()) {
            // not a number
            if (s.at(i) < 48 || s.at(i) > 57) {
                break;
            }

            else {
                temp.push_back(s.at(i));
            }

            ++i;
        }

        for (i = 0; i < temp.size(); ++i) {
            // check if int ans overflow
            if (ans > (INT_MAX - (temp.at(i) - '0')) / 10) {
                return positive ? INT_MAX : INT_MIN;
            }

            ans = ans * 10 + (temp.at(i) - '0');
        }

        return positive ? ans : -ans;
    }
};