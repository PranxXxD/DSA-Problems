/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLastWord = function(s) {
    if(s.length == 0) return 0
    let lastword = s.trim().split(" ")
    return lastword[lastword.length-1].length
};