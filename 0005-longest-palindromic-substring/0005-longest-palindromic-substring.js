/**
 * @param {string} s
 * @return {string}
 */

const getPalindrome = (left,right,s)=>{
    while(left >= 0 && right< s.length){
       if(s[left]!== s[right])break
        left--
        right++
    }
    return [left+1,right]
}
var longestPalindrome = function(s) {
  let ans = [0,1]
  for(let i=0; i<s.length;i++){
      let even =  getPalindrome(i-1,i,s)
      let odd = getPalindrome(i-1,i+1,s)
      let currans = odd[1] - odd[0]> even[1]-even[0] ? odd : even
      ans = ans[1]-ans[0]>currans[1]-currans[0] ? ans: currans
  }
  
    return s.slice(ans[0],ans[1])
};