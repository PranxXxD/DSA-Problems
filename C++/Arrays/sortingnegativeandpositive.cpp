#include<iostream>
using namespace std;

void sorting(int arr[], int n){
    int j=0;
     for(int i = 0; i<n; i++)
    {
        /* code */
         if(arr[i]<0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
} 

int main(){
    
    int arr[] = {23,-4,56,-50,21,-34,80};
    int n=7;

   sorting(arr,n);

    cout<<"Printing Sorted Array"<<endl;

   for (int i = 0; i < n; i++)
   {
    /* code */
    cout<<arr[i]<<" ";
   }
   

}