/**
 * @param {number} x
 * @return {boolean}
 */
var isPalindrome = function(x) {
    if(Math.abs(x) !== x) return false;
    let str = String(x);
    let arr = str.split("").reverse();
    str = arr.join("");
    let reversed = Number(str);
    return reversed === x;
};