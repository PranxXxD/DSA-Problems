#include <iostream>
#include <limits.h>
using namespace std;

// bool PrintArray(int arr[][3], int row, int col, int target)
// {
//     // Row wise accessing the elements of the array
//     for (int i = 0; i < row; i++)
//     {
//         /* code */
//         for (int j = 0; j < col; j++)
//         {
//             /* code */
//             // cout << arr[i][j] <<  " ";
//             if (arr[i][j] == target)
//             {
//                 /* code */
//                 return true;
//             }
            
//         }
//         cout << endl;
//     }

//     return false;
//     // column wise access the elements of the array

//      for (int i = 0; i < col; i++)
//     {
//         /* code */
//         for (int j = 0; j < row; j++)
//         {
//             /* code */
//             cout << arr[j][i] <<  " ";
//         }
//         cout << endl;
//     }
// }

int DynamicPrint(int arr[][3], int row, int col){

    for (int i = 0; i < row; i++)
    {
        /* code */
        for (int j = 0; j < col; j++)
        {
            /* code */
            cout << arr[i][j] <<" ";
        }
        cout << endl;
    }
}


// int findMax(int arr[][3], int row, int col, int maxNum){

//     for (int i = 0; i < row; i++)
//     {
//         /* code */
//         for (int j = 0; j < col; j++)
//         {
//             /* code */
//            if(arr[i][j] >  maxNum ){
//             maxNum = arr[i][j];
//            }
//         }
//     }
//     return maxNum;
// }

// int findMin(int arr[][3], int row, int col, int minNum){

//     for (int i = 0; i < row; i++)
//     {
//         /* code */
//         int sum = 0;
//         for (int j = 0; j < col; j++)
//         {
//             /* code */
//             sum += arr[i][j];
//            if(arr[i][j] < minNum ){
//             minNum = arr[i][j];
//            }
//         }
//         cout << sum<<endl;
//     }
//     return minNum;
// }

// int colSum(int arr[][3], int row, int col){

//     for (int i = 0; i < col; i++)
//     {
//         /* code */
//         int sum = 0;
//         for (int j = 0; j < row; j++)
//         {
//             /* code */
//             sum += arr[j][i];
          
//         }
//         cout << sum<<endl;
//     }
  
// }
// int DiagnalSum(int arr[][3], int row, int col){
//         int sum = 0;
//     for (int i = 0; i < col; i++)
//     {
//         /* code */
//         sum += arr[i][i];

//     }
//     return sum;
  
// }

int TransposeMatrix(int arr[][3], int row, int col){;
    for (int i = 0; i < row; i++)
    {
        /* code */
        for (int j = i; j < col; j++)
        {
            /* code */
              swap(arr[i][j],arr[j][i]);

        }
    }
    
  
}


int main(){

    // int arr[4][4] = {{2,3,4},{5,60,7},{8,9,10},{12,15,19}};
    int arr[3][3] = {{20,30,40},{50,60,70},{80,90,10}};
    // int Darr[3][3];
    int row = 3;
    int col = 3;
    // int target;
    // int maxNum =  INT_MIN;
    // int minNum =  INT_MAX;
    

    // for (int i = 0; i < row; i++)
    // {
    //     /* code */
    //     for (int j = 0; j < col; j++)
    //     {
    //         /* code */
    //  cout << "Enter the number for index :" << i <<" and column: " << j << endl;
    //         cin >> Darr[i][j];
    //     }
        
    // }


    
    // cout<< "Enter to the number to check if it exists in array :"; cin >> target;
    //     cout<<"Targtet found or not: "<< PrintArray(arr, row, col,target) << endl;
    // DynamicPrint(Darr, row, col);
    // cout<<"Printing the max number : " << findMax(arr,row,col,maxNum) << endl;
    // cout<<"Printing the min number : " << findMin(arr,row,col,minNum);
    // cout<<"Printing the col sum : " << colSum(arr,row,col);
    // cout<<"Printing the Diagnal sum : " << DiagnalSum(arr,row,col);

     cout<<endl<<"Before transpose:" <<endl;
     DynamicPrint(arr, row, col);

    cout<<endl<<"Doing Transpose : "<<endl;
     TransposeMatrix(arr,row,col);
 
     cout<<endl<<"After transpose :"<<endl;
      DynamicPrint(arr, row, col);

  return 0;
}