class Solution {
public:
    int strStr(string haystack, string needle) {
        int haystackSize = haystack.size();
        int needleSize = needle.size();
        int i = 0;

        while (needleSize + i - 1 < haystackSize) {
            if (haystack.substr(i, needleSize) == needle) {
                return i;
            }

            // loop until value at index i in haystack = first letter of needle
            while (needleSize + i++ - 1< haystackSize && haystack[i] != needle[0]);
        }

        return -1;
    }
};