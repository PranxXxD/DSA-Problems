#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

// int twosum(vector<int>&nums, int target ){
    
    

// }


int main(){
    
    vector<int> nums = {3,5,7,9,10,4};
    int target = 12;
    int n =  nums.size();
    int left = 0;
    int right = n-1;
    sort(nums.begin(), nums.end());
    while (left<right)
    {
        /* code */
        int sum = nums[left] + nums[right];
        if (sum == target)
        {
            return {left};
        }
        else if (sum < target)
        {
            left++;
        }
        else
        {
            right--;
        }
        return {};
    }
    
    // twosum(nums,target);
}

