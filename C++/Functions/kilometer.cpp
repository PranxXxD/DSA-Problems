#include<iostream>
using namespace std;    


int kilometers(int n){

    float miles = float(n * 0.621371);

    return miles;
}

int main(){

    float answer = kilometers(20);

    cout << "The given kilometers is converted to miles :- " << answer << endl;

}