#include<iostream>
using namespace std;


int digits(int n){

    int reminder;
    int value = 0;

    while(n>0){
    reminder = n%10;
    value = value+reminder;
    int dg = n%10;
    n = n/10;
    cout << dg <<endl;
    }
    return 0;
    
}

int main(){

int DigitValue = digits(1);
cout<<"Digits for the integer is:-"<< DigitValue << endl;

}