#include<iostream>
using namespace std;

int main(){

int n;
cin >> n;

// for(int row=0; row<n; row++){
// for(int col=0; col<n-row; col++){
//         cout << " ";
//  }
//  for(int col=0; col<row+1; col++){
//     cout << "* ";
//  }
// for(int col=0; col<n+row; col++)
// {
//     cout<<" ";
// }
// cout<<endl;
// }


//Numeric Plaindrome Equilatral pyramid
for(int row=0; row<n; row++){ 
        int value;
     for(int col=0; col<n-row; col++){
        cout << " ";
 }
    for(int col=0;col<row+1; col++){
            // char value = col+65;
            value = col+1;
            // cout <<  value << " ";
  }

  //   jab tak value tk nahi pochenge tab tak print karenge
  for (int i = value; i> 5;){
         i = i-1;
        cout << i;
    }

    cout<<endl;
 }
}