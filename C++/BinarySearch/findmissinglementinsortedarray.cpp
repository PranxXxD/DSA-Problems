#include<iostream>
using namespace std;

int missingElement(int arr[], int n){
    int start = 0;
    int end= n-1;
    int ans =-1;
    int mid = start + (end-start)/2;
    while(start<=end){
        mid = start + (end-start)/2;
        int diff = arr[mid] - mid;
        if(diff == 1){
            start =  mid+1;
    }
    else{
        ans =  mid;
        end =mid-1;
    }
    }

    if(ans+1 == 0){
        return n+1;
 }
   return ans+1;
   
   }

int main(){

    int arr[] = {1,2,3,4,5,6,7,8};
    int n = 8;

    cout << missingElement(arr,n) << endl;
}