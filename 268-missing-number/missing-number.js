/**
 * @param {number[]} nums
 * @return {number}
 */
var missingNumber = function(nums) {
    let sum = nums.reduce((sum, num)=> sum+=num, 0);
    return Math.floor(((nums.length)*(nums.length+1))/2) - sum;
};