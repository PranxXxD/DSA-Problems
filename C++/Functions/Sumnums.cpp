#include<iostream>
using namespace std;    


// int SumNum(int n){
// int sum = 0;
//     for(int i= 0; i <= n; i++){
//          sum += i;
//     }
//         return sum;
// }


int sumEven(int n){

    int Evensum = 0;
    for(int i= 0; i <= n;){
        Evensum += i+2;
    }
    return Evensum;
}

int main(){

    // int value = SumNum(10);
    int AllSum = sumEven(10);

    // cout <<"Sum of all numbers from 1 -> N are:- "<<value << endl;
    cout <<"Sum of all Even numbers from 1 -> N are:- "<< AllSum << endl;
}