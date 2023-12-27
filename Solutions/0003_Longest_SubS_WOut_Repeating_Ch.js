/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLongestSubstring = function(s) {
    // window slide 
    // usually with array, string, list to find subrange of specific length

    if (s.length < 2) {
        return s.length;
    }

    let max = -1;
    let left = 0;
    let cSet = new Set();

    //lets say a substring k contained in string s makes it repeat characters, then we only consider substring s - k
    for (let i = 0; i < s.length; ++i) {

        //repetitive character reached, delete substring k that is left of i
        while (cSet.has(s[i])) {
            cSet.delete(s[left]);
            ++left;
        }

        cSet.add(s[i]);
        max = Math.max(max, i - left + 1);
    }

    return max;
};