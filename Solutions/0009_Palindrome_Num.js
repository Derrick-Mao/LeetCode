/**
 * @param {number} x
 * @return {boolean}
 */
var isPalindrome = function(x) {
    // String conversion
    /*
    if (x < 0) {
        return false
    }

    let y = x.toString();

    if (y.length == 1) {
        return true;
    }

    let left = 0;
    let right = y.length - 1;

    let isP = true;
    while (isP == true && left <= right) {
        if (y[left] != y[right]) {
            isP = false;
        }

        ++left;
        --right;
    }

    return isP;
    */

    // Without converting integer to string
    if (x < 0) {
        return false;
    }

    if (x / 10 === 0) {
        return true;
    }
    
    let y = 0;
    let z = x;
    
    while (x !== 0) {
        let digit = x % 10;
        y = y * 10 + digit;
        x = Math.floor(x / 10);
    }

    return z - y === 0;

};