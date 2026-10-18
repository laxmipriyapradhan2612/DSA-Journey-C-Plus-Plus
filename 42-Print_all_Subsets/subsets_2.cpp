/*Given an integer array nums that may contain duplicates, return all possible subsets (the power set).

The solution set must not contain duplicate subsets. Return the solution in any order.*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void getAllSubsets(vector<int>& nums, vector<int>& ans, int i, vector<vector<int>> &allSubsets){
        if(i== nums.size()){
            allSubsets.push_back({ans});
            return;
        }

        //include
        ans.push_back(nums[i]);
        getAllSubsets(nums, ans,i+1, allSubsets);

        ans.pop_back();
        int idx=i+1;
        while(idx< nums.size() && nums[idx]== nums[idx-1]) idx++;

        //exclude
        getAllSubsets(nums, ans,idx, allSubsets);

    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        vector<vector<int>> allSubsets;
        vector<int> ans;
         getAllSubsets(nums, ans,0, allSubsets);
        return allSubsets;
    }

    int main(){
        vector <int> nums= {1,2, 2};
        vector<vector<int>> result= subsetsWithDup(nums);
        for(auto val: result){
            cout<<"[";
            for(int x: val){
                cout<< x<< " ";
            }
            cout<< "]" << endl;
        }
        return 0;
    }