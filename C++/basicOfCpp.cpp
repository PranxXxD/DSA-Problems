#include<iostream>
using namespace std;

int main(){

    // int a = 5;
    // int b = 3;

    // cout << (a<=b) << endl;

    // cout << !(a==5);
    
   int n;
   cin >> n;
//    for(int row=0; row<n ; row++){
//     for(int col=0; col<row+1; col++){
//         cout << col+1;
//     }
//            cout << endl;
//    } 

// for (int row = 0; row < n; row++)
// {
//     for (int col = 0; col < n-row; col++)
//     {
//         cout << col+1;
//     }
//     cout << endl;
// }

for (int row = 0; row < n; row++)
{
    int k=0;
    for (int col = 0; col < (2*n-1); col++)
    {
        if (col < n-row-1)
        {
             cout << "*";

        }
        else if(k<(2*row+1)){
            cout << col + 1;
            k++;
        }
        else{
            cout << "*";
        }
    }
    cout << endl;
    /* code */
}



}