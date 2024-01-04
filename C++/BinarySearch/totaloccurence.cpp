#include<iostream>
#include<vector>
using namespace std;

int firstOccurrence(vector<int>&nums, int &n, int &target){
    int start = 0;
    int end = n-1;
    int ans = -1;
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


int LastOccurrence(vector<int>&nums, int &n, int &target){
    int start = 0;
    int end = n-1;
    int ans = -1;
    // int mid = start +(end-start)/2;

    while (start<=end) {
//    int mid = start +(end-start)/2;
int mid = (start+end)/2;
     if(nums[mid]==target) {
        ans = mid;
    //    end = mid-1;
     start = mid+1;
    
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
    int n = 9;


    int firstOcc = firstOccurrence(nums,n,target);
        int LasttOcc = LastOccurrence(nums,n,target);
        int total = LasttOcc - firstOcc+1;
    cout<<"Total:-"<<total<<endl;
    return total;
}