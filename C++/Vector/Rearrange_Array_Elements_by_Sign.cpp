#include<iostream>
using namespace std;
#include<vector>

int main(){
    // Brute force method
    vector<int> nums = {3,1,-2,-5,2,-4};
    // int Arraysize =  nums.size();
    // vector<int>pos,neg;
    vector<int>ans(nums.size());

    // for(int i=0; i < Arraysize ; i++){
    //     if(nums[i]>0){
    //         pos.push_back(nums[i]);
    //     }else{
    //         neg.push_back(nums[i]);
    //     }
    // }
    
    // int j=0;
    // while (j<pos.size())
    // {
    //     /* code */
    //     ans.push_back(pos[j]);
    //     ans.push_back(neg[j]);
    //     j++;
    // }
    
    // for(int k=0; k<ans.size(); k++){
    //     cout << ans[k]<<",";
    // }


    // Method 2 -> Two pointer approach
     int even = 0;
        int odd = 1;

        int i=0;
        while(i<nums.size()){
            if(nums[i]>0) {
                ans[even] = nums[i]; 
                even+=2;
            }
           else if(nums[i]<0){
                ans[odd] = nums[i]; 
                odd+=2;
           }  
           i++;
         }

         for(int k=0; k<ans.size(); k++){
        cout << ans[k]<<",";
    }

}