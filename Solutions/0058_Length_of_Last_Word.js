/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLastWord = function(s) {
    /*
    trimmed_s = s.trimEnd();
    let end = trimmed_s.length - 1;
    let ctr = 0;
    
    while (trimmed_s[end] !== ' ' && end >= 0) {
        ++ctr;
        --end;
    }

    return ctr;
    */

    return s.trimEnd().split(' ').pop().length;
};