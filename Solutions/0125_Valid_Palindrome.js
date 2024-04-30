/**
 * @param {string} s
 * @return {boolean}
 */
var isPalindrome = function(s) {
    // upper to lower
    s = s.toLowerCase();

    // remove non-alphanumeric characters
    let str = "";
    for (let c of s) {
        cDec = c.charCodeAt(0);
        if ((97 <= cDec && cDec <= 122) || (48 <= cDec && cDec <= 57)){
            str += c;
        }
    }

    // check palindrome
    let i = 0;
    let j = str.length-1;
    while (i <= j) {
        if (str[i] !== str[j]) {
            return false;
        }

        ++i;
        --j;
    }
    
    return true;
};