#include <iostream>
using namespace std;
#include <unordered_map> 

int main(){

    int arr[7] = {1,3,4,3,6,3,4};
    int n = sizeof(arr)/sizeof(int);

    unordered_map<int,int> hash;

    for (int i = 0; i < n; i++)
    {
        /* code */
        hash[arr[i]]++;
    }

    for (int i = 0; i < n; i++)
    {
        /* code */
    if(hash[arr[i]]>1){
        return i+1;
        cout << i+1<<endl;
    }
    }
    return -1;

}    
    