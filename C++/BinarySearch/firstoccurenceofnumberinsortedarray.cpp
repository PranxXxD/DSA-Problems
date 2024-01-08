#include<iostream>
#include<vector>
using namespace std;

int firstOccurrence(vector<int>&nums, int &n, int &target){
    int start = 0;
    int end = n-1;
    int ans = 0;
    // int mid = start +(end-start)/2;

    while (start<=end) {
   int mid = start +(end-start)/2;
     if(nums[mid]==target) {
        ans = mid;
       end = mid-1;
    }
    else if(nums[mid]>target) {
        start = mid+1;

    }
  else if(nums[mid] < target) {
    end = mid-1;
   }

 }
  return ans;
}

int main(){
     vector<int> nums = {10,20,30,30,30,30,80,90};
    int target = 30;
    int n = 8;


    int firstOcc = firstOccurrence(nums,n,target);

    if(firstOcc == -1){
    cout<< "Element doesn't exist in array"<<endl;
   }
   else{
    cout<< "Element exists in array"<<" "<<firstOcc<<endl;
   }
   return 0;
}