#include<iostream>
using namespace std;    


int temperature(int n){

    int value = n - 32;
    float Celsius = ((value*5)/(float)9);

    return Celsius;
}

int main(){


   float tempValue = temperature(300);

    cout<< "temperature in Celsius is "<< tempValue <<endl;

}