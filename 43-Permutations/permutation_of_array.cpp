/*Given an array nums of distinct integers, return all the possible permutations. 
You can return the answer in any order.*/

#include <iostream>
#include <vector>
using namespace std;
void getPerms(vector<int>& nums, int idx, vector<vector<int>> &ans){
        if(idx== nums.size()){
            ans.push_back({nums});
            return;
        }
        for(int i= idx; i< nums.size(); i++){
            swap(nums[idx], nums[i]); // idx place --> ith element choice 
            getPerms(nums, idx+1, ans);
            swap(nums[idx], nums[i]); // backtracking 
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        getPerms(nums, 0, ans);
        return ans;
    }

    int main(){
        vector <int> nums= {1,2,3};
        vector<vector<int>> result= permute(nums);
        for(auto val: result){
            cout<<"[";
            for(int x: val){
                cout<< x<< " ";
            }
            cout<< "]" << endl;
        }
        return 0;
    }