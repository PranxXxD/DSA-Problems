#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<vector<int>>v{{1,2,3,4},{5,6,7,8},{9,10,11,12}};

  int row  = v.size();
  int col = v[0].size();
  cout << row << endl;

  for(int startrow = 0; startrow<=col; startrow++){
    if((startrow & 1)==0){
      for(int i=0 ; i<col; i++){
        cout<<v[startrow][i]<<" ";
      }
    }
    else{
      for(int i=col-1 ; i>=0; i--){
        cout<<v[startrow][i]<<" ";
      }
    }
  }

}