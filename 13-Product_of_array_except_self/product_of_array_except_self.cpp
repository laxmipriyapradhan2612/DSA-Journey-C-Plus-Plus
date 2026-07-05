/*Given that the array nums, return an array answer such that answer[i] is equal to the product of
 all the elements of nums except nums[i]
 e.g nums--> [1,2,3,4]
 answer--> [24, 12, 8, 6]
*/

//BRUTE FORCE APPROACH
// TIME COMPLEXITY--> 0(n^2)
#include <iostream>
#include<vector>
using namespace std;
vector<int> productExceptSelf(vector<int> nums){
    int n= nums.size();
    vector<int> ans;
    for(int i=0; i<n; i++){
        int prod=1;
        for(int j=0; j<n; j++){
            if(i!= j){
                prod= prod*nums[j];
            }

        }
        ans.push_back(prod);
    }
    return ans;
}
int main(){
    vector<int> nums= {1,2,3,4};
    vector<int> ans=productExceptSelf(nums);
    for(int val: ans){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}