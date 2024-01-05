#include <iostream>
#include <vector>
using namespace std;

int PivotElement(int arr[], int n){
    int start = 0;
    int end  = n-1;
    int ans =-1;
    int mid = start + (end-start)/2;

    while(start <= end) {
        if(start == end) return start;

        else if(arr[mid] < arr[mid-1]){
            return arr[mid-1];
        }
        else if(arr[mid] > arr[mid+1]){
            return arr[mid];
        }
        else if(arr[start]> arr[mid]){
            end  = mid-1;
        }
        else{
            start = mid+1;
        }
          mid = start + (end-start)/2;
    }
    return ans;
}

int BST(int arr[], int target){
    int s = 0;
    int e = arr.size()-1;
    int mid = s+(e-s)/2;

    while (s<=e){
        if (arr[mid]>target)
        {
            e =  mid-1;
        }
        if(arr[mid]<target){
            s = mid+1;
        }
        mid = s+(e-s)/2;
    }
   return -1;
    
}

int main(){ 

    int arr[] = {10,12,14,16,2,4,6,8,10};
    int n = 9;
    int target = 16;

    int pivot = PivotElement(arr,n);
    int ans =-1;

    if(target>=arr[0] && target <= arr[pivot]){
        ans  = BST(arr,0,PivotElement,target);
    }
    else{
        ans  = BST(arr,PivotElement+1,n-1,target);
    }

}
