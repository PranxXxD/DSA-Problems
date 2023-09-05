#include<iostream>
using namespace std;

int maxOfThreeNums(int num1, int num2, int num3){

    int value = max(num1,num2);
    int MaxValue =  max(value,num3);
    return MaxValue;
}

int main(){

    int maxNum = maxOfThreeNums(4,6,8);
    cout <<"Max number is " << maxNum;

}