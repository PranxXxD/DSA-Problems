#include<iostream>
using namespace std;

int EvenOdd(int n){
    if(n%2 == 0) {
        return true;
    }
    else return false;
}

int main(){

    bool value = EvenOdd(4);

    if(value){
        cout << "Given Number is Even" ;
    }
    else{
        cout << "Given Number is Odd" ;
    }

}