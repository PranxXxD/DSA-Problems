#include<iostream>
#include <vector>
using namespace std;

vector<int>spiralOrder(vector<vector<int> >matrix){
     
      vector<int>ans;
        int row = matrix.size();
        int col = matrix[0].size();
        int startrow = 0;
        int endcol = col-1;
        int endrow = row-1;
        int startcol = 0;
        int total_elements = row*col;
        int count = 0;

        while(count<total_elements){
            // printing starting row
            for(int i=startcol; i<=endcol && count<total_elements;i++){
                ans.push_back(matrix[startrow][i]);
                count++;
            }
            startrow++;
            // printing end col
            for(int i=startrow; i<=endrow && count<total_elements;i++){
                ans.push_back(matrix[i][endcol]);
                count++;
            }
            endcol--;
            // printing end row
            for(int i=endcol; i>=startcol && count<total_elements;i--){
                ans.push_back(matrix[endrow][i]);
                count++;
            }
            endrow--;
            // printing start col
            for(int i=endrow; i>=startrow && count<total_elements;i--){
                ans.push_back(matrix[i][startcol]);
                count++;
            }
            startcol++;
        }
        return ans;
}

int main(){
    vector<vector<int>>matrix{{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int 8uvalue = spiralOrder(matrix);
    cout<< value<<endl;
}