#include <iostream>
using namespace std;
#include <set>
#include <vector>

int main(){
    int arr1[] = {1,3,4,5,6,7,8};
    int n1= sizeof(arr1)/sizeof(int);
    int arr2[] = {1,4,5,6,9,10,11};
    int n2= sizeof(arr2)/sizeof(int);
    int arr3[] = {2,3,5,7,9,10,12};
    int n3= sizeof(arr3)/sizeof(int);


    set<int>st;
    vector<int>ans;
    int i,j,k;
    i=j=k=0;

    while(i<n1 && j<n2 && k<n3){
        if(arr1[i]==arr2[j]==arr3[k]){
            st.insert(arr1[i]);
            i++; j++; k++;
    }
    else if(arr1[i]<arr2[j]){
        i++;
    }
    else if(arr2[j]<arr3[k]){
        j++;
    }
    else{
        k++;
    }

    }
    for(auto i : st){
        ans.push_back(i);
    }
   return ans;
}