#include<iostream>
#include<istream>
#include<vector>
using namespace std;

void Printpairs(int arr[], int num){

     for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            cout  << "{" << arr[i] << "," << arr[j]<<"}"<< " ";
            
        }
        cout<<endl;
    }


}



int main(){

    int arr [] = {20,30,40,50};
    int num = 4;

   cout << "Two pairs:-"<<endl;
    Printpairs(arr, num);
    
    

}