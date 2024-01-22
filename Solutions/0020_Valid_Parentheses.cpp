class Solution {
public:
    bool isValid(string s) {
        if (s.size() % 2 != 0) {
            return false;
        }

        vector<char> openB;

        for (int i = 0; i < s.size(); ++i) {
            if (s.at(i) == '(' || s.at(i) == '[' || s.at(i) == '{') {
                openB.push_back(s.at(i));
            }

            else if (!openB.empty()) {
                if ((s.at(i) == ')' && openB.back() == '(') || 
                    (s.at(i) == ']' && openB.back() == '[') || 
                    (s.at(i) == '}' && openB.back() == '{')) {
                    openB.pop_back();
                }

                else {  // bracket don't match
                    return false;
                }
            }

            else {  // not open bracket and openB is empty
                return false;
            }
        }

        return openB.empty();
    }
};