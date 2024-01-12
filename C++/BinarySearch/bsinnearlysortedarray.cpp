#include<iostream>
#include<Vector>
using namespace std;    

int NearSortedArray( vector<int>arr, int n, int target){

    int start = 0;
    int end = n-1;
    int mid = start + (end-start) / 2;
    int ans =-1;

    while (start <= end)
    {
        /* code */
        if(mid-1>0 && arr[mid-1] == target){
            return ans = mid-1;
        }
        if(arr[mid] == target){
            return ans = mid;
        }
        if(arr[mid+1] == target){
            return ans = mid+1;
        }
        if(arr[mid]<target){
            start = mid+2;
        }
        else{
            end = mid-2;
        }
        mid = start + (end-start) / 2;
   }
   return ans;
    
}

int main(){

   vector<int> arr = {20,10,30,50,40,70,60};
    int n = 7;
    int target = 60;

    int NearIndex = NearSortedArray(arr,n,target);

    if(NearIndex == -1){
        cout<<"Element not found"<<endl;
    }
    else{
        cout<<"Element found at index:"<<NearIndex<<endl;
    }
}