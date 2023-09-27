#include<iostream>
using namespace std;

void SortZerosandOnes(int arr[], int num){

    int countzero = 0;
    int countone = 0;
    int index = 0;
    
  for (int i = 0; i < num; i++)
  {
    /* code */
    if(arr[i]==0){
        countzero++;
    }
    if (arr[i]==1){
        countone++;
    }
    
  }

  while (countzero--)
  {
    arr[index] = 0;
    index++;
  }

  while (countone--)
  {
    /* code */
    arr[index]= 1;
    index++;
  }
}



int main(){


    int arr[] = {0,1,0,1,0,0,1,1,0,0,1,1,1};

    int num = 13;

cout<<"sorted array : ";

    SortZerosandOnes(arr,num);

    for (int i = 0; i < num; i++)
    {
        /* code */
       cout<<arr[i];

    }

}