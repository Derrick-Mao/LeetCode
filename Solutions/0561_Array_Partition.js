/**
 * @param {number[]} nums
 * @return {number}
 */
var arrayPairSum = function(nums) {
    //sort array ascending order
    nums.sort((a, b) => a - b);

    //min of each pairing is at i%2 = 0; add the total up
    var total = 0;
    for (let i = 0; i < nums.length - 1; i = i + 2) {
        total = total + nums[i];
    }

    return total;
};