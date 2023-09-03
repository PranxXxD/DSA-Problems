#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

//     for(int row=0; row<n;row++){
//         for(int col=0; col<row+1;col++){
//             cout << "* ";
//     }
//      cout << " " << endl;
//  }

//  numeric space half pyramid
//  for(int row=0; row<n; row++){ 
        
//     for(int col=0;col<row+1; col++){
//         if(col==0){
//             cout << 1;
//         }
//         else if(row == n-1 || col == row+1-1){
//             cout << col+1;
//         }
//         else{
//             cout << "  ";
//         }
//     }
//     cout<<endl;
//  }

// character half pyramid
for(int row=0; row<n; row++){ 
        char value;
    for(int col=0;col<row+1; col++){
            // char value = col+65;
            value = col+1+'A'-1;
            cout <<  value;
  }
  //   jab tak 'A' tk nahi pochenge tab tak print karenge
    char alphabet = value;
    while(alphabet >'A'){
        alphabet = alphabet-1;
        cout << alphabet;
    }

    cout<<endl;
 }
}