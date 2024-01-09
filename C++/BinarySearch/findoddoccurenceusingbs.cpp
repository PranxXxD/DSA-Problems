#include<iostream>
using namespace std;

int OddNumber(int arr[], int n){

    int start = 0;
     int end = n-1;
     int mid = start + (end-start)/2;


     while(start <= end){
        if(start == end){
            return start;
     }

     if(mid%2 == 0){
        if(mid+1<n && arr[mid]== arr[mid+1]){
            start = mid+2;
        }
        else{
            end = mid;
        }
     }
     if(mid%2 == 1){
        if(mid-1 >0 && arr[mid]== arr[mid-1]){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
     }
    mid = start+(end-start)/2;
     }
     return -1;
}

int main(){

    int arr[] = {2,2,4,4,1,1,5,5,6,6,7,7,8};
    int n = 13;

    int oddnumberIndex = OddNumber(arr, n);

    cout<<"Odd number is : "<<oddnumberIndex<<endl;

}