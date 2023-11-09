#include <iostream>
#include <vector>
using namespace std;

int Duplicate(vector<int>&arr, int&n){
    int i = 1;
    int j = 0;
    int k;

    while (i < n){
    
        /* code */
        if(arr[i] == arr[j]) i++;
        else arr[++j] = arr[i++];
    }
    k= j-0+1;
    cout<<"unique elments are : "<<k<<endl;
    return k;
 }


int main(){

    vector<int> arr = {0,1,1,2,2,3,3,4,5,7,9,10,11,11};
    int n = arr.size()-1;

    return Duplicate(arr, n);
    
}