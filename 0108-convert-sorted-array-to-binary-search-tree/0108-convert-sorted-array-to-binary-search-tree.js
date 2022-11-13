/**
 * Definition for a binary tree node.
 * function TreeNode(val, left, right) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.left = (left===undefined ? null : left)
 *     this.right = (right===undefined ? null : right)
 * }
 */
/**
 * @param {number[]} nums
 * @return {TreeNode}
 */



var sortedArrayToBST = function(nums) {
        if(nums == null || nums.length == 0) return null
        var value = ~~(nums.length/2)
        var root = new TreeNode(nums[value])
        root.left = sortedArrayToBST(nums.slice(0,value))
        root.right = sortedArrayToBST(nums.slice(value+1))
        return root
   
};