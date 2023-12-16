#include <iostream>
using namespace std;

void countNum(int n){

    for(int i=1; i<=n; i++){

        cout << i <<""<<endl;
    }
}

int main(){

   int ans = countNum(10)
    cout << "final ans: " << ans << endl;
}