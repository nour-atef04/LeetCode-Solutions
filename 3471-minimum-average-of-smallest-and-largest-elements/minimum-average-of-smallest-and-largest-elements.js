/**
 * @param {number[]} nums
 * @return {number}
 */
var minimumAverage = function(nums) {
    nums.sort((a, b) => a-b);
    let minAv = Infinity;
    while(nums.length > 0){
        let min = nums[0];
        let max = nums[nums.length-1];
        nums.pop();
        nums.shift();
        let av = (min+max)/2;
        minAv = minAv > av ? av : minAv;
    }
    return minAv;
};