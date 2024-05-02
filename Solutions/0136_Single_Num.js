/**
 * @param {number[]} nums
 * @return {number}
 */
var singleNumber = function(nums) {
    let sol = 0;
    for (let n of nums) {
        sol^=n;
    }

    return sol;
};