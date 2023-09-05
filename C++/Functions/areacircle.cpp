#include<iostream>
using namespace std;


int area(float n){
    float pie = 3.14;
    float Area = pie * n*n;

    return Area;
}

int main(){

  float AreaCircle = area(15);

cout<< "Area of circle is :- " <<  AreaCircle << endl;

}