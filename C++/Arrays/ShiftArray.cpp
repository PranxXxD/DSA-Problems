#include<iostream>
using namespace std;

void shiftArray(int arr[], int num){

    int temp = num;

    for(int i=num-1 ; i>=1; i--){
        arr[i] = arr[i-1];
    }
    arr[0] = temp;
  
}



int main(){


    int arr [] = {1,2,3,4,5,6,7};
    // cout << arr << endl;
    int num = 7;

    shiftArray(arr, num);

    for(int i = 0; i < num ; i++){
        cout<<arr[i];
    }


}