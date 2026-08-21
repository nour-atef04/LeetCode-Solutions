/**
 * @param {string} s
 * @return {boolean}
 */
var isPalindrome = function(s) {
    s = s.trim().toLowerCase().replace(/[^a-z0-9]/g, "");
    return s === s.split("").reverse().join("");
};