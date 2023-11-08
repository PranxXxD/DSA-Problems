#include<iostream>
#include <vector>
using namespace std;



    double slidinnWidow(vector<int>& nums, int k){
        int sum=0;
        int i=0;
        int j=k-1;

        for(int y=0; y<=j;y++){
            sum = sum + nums[y];
        }
         int maxSum = sum;
         j++;

         while(j<nums.size()){
             sum = sum -  nums[i++];
             sum = sum + nums[j++];
             maxSum = max(maxSum,sum);
         }
         double maxAvg =  maxSum/(double)k;
         cout<<"maxSum of sub array is: "<<maxSum<<endl;
         return maxAvg;

    }

int main(){
    vector<int>nums = {1,12,-5,-6,50,3};
    int k=2;

    return slidinnWidow(nums,k);
}