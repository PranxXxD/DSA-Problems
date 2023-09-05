#include<iostream>
using namespace std;

int Prime(int n){

    for(int i = 2; i < n; i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;

}

int main(){

    int value = Prime(1);

    if(value){
        cout << "Given number is prime " << value << endl;
    }
    else{
         cout << "Given number is not prime" << value << endl;
    }

}