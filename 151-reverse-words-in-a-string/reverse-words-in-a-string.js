/**
 * @param {string} s
 * @return {string}
 */
var reverseWords = function(s) {
    return s.trim().split(/\s+/).map((word)=>word.trim()).reverse().join(" ");
};