#include <iostream>
using namespace std;

int getQuotient(int divisior, int dividend){

    int start =0;
    int end = dividend;
    int mid = start + (end-start) / 2;
    int ans =-1;

    while(start<=end){
        if(mid*divisior == dividend){
            return mid;
        }

        if (mid*divisior < dividend)
        {
            ans = mid;
            start = mid+1;
        }
        if(mid*divisior > dividend){
            end = mid-1;
        }
        mid =start + (end-start) / 2;
    
    }
    return ans;
}

int main(){

    int divisior = 8;
    int dividend = 29;

    int Answer = getQuotient(abs(divisior),abs(dividend));


    if((divisior > 0 && dividend<0)|| (divisior < 0 && dividend > 0)){
        Answer = 0 - Answer;
    }
   
    cout <<"The Answer is:"<< Answer <<endl;

}