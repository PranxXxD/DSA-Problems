#include<iostream>
#include<algorithm>
using namespace std;

int main(){

    // int arr[][3] = {{1,2,3},{4,5,6},{7,8,9}};

    // int i=2,j=0;

    // for(;j<= 2; j++){
    //     cout<<arr[i][j];
    //     i--;
    // }

    int arr[6] = {1,2,3,4,5,6};
    int n = 6;
    int k=3;

    reverse(arr,arr+n);
    reverse(arr ,arr+k);
    reverse(arr+k,arr +n);

    for (int i = 0; i < n; i++)
    {
        /* code */
        cout<<arr[i];
    }
    
    
}