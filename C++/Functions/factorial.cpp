#include<iostream>
using namespace std;    


int factorial(int n){
    int fact = 1;
    for(int i=2;i<=n;i++){
        fact = fact*i;
    }
    return fact;
}

int main(){

    int factValue = factorial(1);

    cout<<"factorial of a number is:- "<<factValue<<endl;
}