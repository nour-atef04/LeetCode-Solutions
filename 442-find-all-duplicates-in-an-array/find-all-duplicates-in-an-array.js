/**
 * @param {number[]} nums
 * @return {number[]}
 */
var findDuplicates = function(nums) {
    const mySet = new Set();
    const res = [];
    for(let num of nums){
        if(mySet.has(num)) res.push(num);
        else mySet.add(num);
    }
    return res;
};