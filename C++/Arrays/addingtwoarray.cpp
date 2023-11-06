#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int calSum(int *array1, int m, int *array2,int n){
   int ans[4];
   int carry = 0;
   int i = m-1;
   int j = n-1;

   while(i<=m && j<=n){
    int x = ans[i]+ ans[j]+ carry;
    int digit =  x%10;
    ans.push_back(digit);
    carry = x/10;
    i--; j--;
   }

   while(i<=m){
    int x = ans[i]+ 0+ carry;
    int digit =  x%10;
    ans.push_back(digit);
    carry = x/10;
    i--;
   }
   
    while(j<=n){
    int x = 0+ ans[j]+ carry;
    int digit =  x%10;
    ans.push_back(digit);
    carry = x/10;
    j--;
   }

    if(carry){
        ans.push_back(carry);
}

while (ans[ans.size()-1]== '0'){
    ans.pop_back();
}
reverse(ans.begin(), ans.end());
return ans;
for (int i = 0; i < ans.size(); i++)
{
    /* code */
    cout << ans<<"";
}

}


int main(){
    int array1[4] = {2,3,5,7};
    int array2[4] = {3,0,9,1};
    int m = 4;
    int n = 4;

   int sum = calSum(array1,m, array2, n);
   return sum;
}