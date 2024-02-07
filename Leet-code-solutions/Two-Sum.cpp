#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int size=nums.size();
        for(int i=0;i<size;i++){
            if(nums[i]+nums[i+1]==target){
                cout<<i<<" "<<i+1;
            }
        }
    }
};

 main(){
    // int 
    return 0;
}