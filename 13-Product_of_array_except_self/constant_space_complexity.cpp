// O(1) SPACE COMPLEXITY
// REMOVING EXTRA PREFIX AND SUFFIX VECTORS

#include <iostream>
#include<vector>
using namespace std;
vector<int> productExceptSelf(vector<int> nums){
    int n= nums.size();

    vector<int> ans(n,1);
    for(int i=1; i<n; i++){
        ans[i]= ans[i-1]*nums[i-1];  //PREFIX ARE PLACED IN THE ans VECCTOR
    }
    int suffix=1;
    for(int i= n-2; i>=0; i--){
        suffix= suffix*nums[i+1];    // suffixes are multiplied with the prefixes present in ans
        ans[i]= ans[i]*suffix;
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