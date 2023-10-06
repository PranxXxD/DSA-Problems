

function twosum(){
    let nums = [3,5,7,9,10,4];
    let n = nums.length;
    let target = 12;
    console.log(n);
    nums.sort(function(a,b){return a-b});
    let low = 0;
    let high = n-1;
    let sum = 0;
    while(low<high){
     sum = nums[low]+nums[high];
     if(nums[low] + nums[high] === target) console.log([low,high]);
     else if(sum>target) high--;
     else low++;
    }
    console.log([]);
}

twosum()