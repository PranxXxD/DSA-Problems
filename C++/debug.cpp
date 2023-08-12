#include<iostream>
using namespace std;

int main(){
    // dubug the code
	// int i=0 ;
	// // i=i+1;
	// cout << i << endl;
	// // /*print i \*//i=i+1;
	// cout<<++i;
 
//  print the sum of i & j
	// short i=2300, j=4322;
	// cout <<i+j;

// print the perimeter of rectangle
    // float l, b;
    // cin >> l;
    // cin >> b;
    // int P = 2*(l+b);
	// cout << "perimeter" << P << endl;

// print the solid square
    // int n;
    // cin>>n;
    // for (int i=0; i<n; i++) {
    //     for (int j=0; j<n; j++) {
    //         cout<<"* ";
    //     }
    //         cout<<endl;
    // }

// print the prime and non prime 
    // int n;
	// cin >> n;
    //   if(n%2 != 0){
    //      cout<<"Prime"<<endl;
    //   }
	// else{
	// 	cout<<"Not Prime"<<endl;	
	// }

// Print Numeric Hollow Inverted Half Pyramid
    // int n;
    // cin>>n;
    // for(int i=0;i<n;++i){
    //     for(int j=0;j<n;j++){
    //         if(j==0 || j == n - i - 1 || i == 0){
    //             cout<<j;
    //         }
    //         else{
    //             cout<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }


    // print full pyramid

      int n;
   cin>>n;
  for (int i = 0; i < n; i++) {
    int k=0;
    for (int j = 0; j < (2*n-1); j++) {
      if(j<n-i-1){
        cout << " ";
      }
      else if( k < (2*i+1)){
        if(k==0 ||  k == 2*i || i == n - 1){
            cout << j+1 ;
        }
        else{
            cout<<" ";
        }
        k++;
      }
      else{
 cout << " ";
      }
    }
   cout << endl;
 }
}