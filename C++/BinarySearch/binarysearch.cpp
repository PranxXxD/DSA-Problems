#include<iostream>
#include<vector>
using namespace std;

int BinarySearch(vector<int>&nums, int& n, int& target){
    int start=0; 
    int end = n-1;
    int mid = (start+end)/2;

    while(start<=end){
        if(nums[mid]== target){
            // return if the element is found
            return mid;
        }
        else if(target > nums[mid]){
            // right part me search karega
            start = mid+1;

        }
        else if(target < nums[mid]){
            // left part me search karega
            end = mid-1;
        }
        mid = (start+end)/2;
    }

    return -1;

}


int main(){
    vector<int> nums = {10,20,30,40,50,60,70,80,90};
    int target = 100;
    int n = 9;

   int ansIndex = BinarySearch(nums,n,target);

   if(ansIndex == -1){
    cout<< "Element doesn't exist in array"<<endl;
   }
   else{
    cout<< "Element exists in array"<<" "<<ansIndex<<endl;
   }

}