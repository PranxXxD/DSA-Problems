/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number}
 */
var searchInsert = function(nums, target) {
    // for(let i=0 ; i< nums.length; i++){
    //     if(nums[i] >= target){
    //         return i
    //     }
    // }
    // return nums.length
    let first = 0
    let last = nums.length-1
    
    while(first <= last){
        let mid = Math.floor(first + (last - first) / 2);
        if(nums[mid] > target){
            last = mid-1
        }else if(nums[mid] < target){
            first = mid+1
        }else return mid
    }
    return first
};