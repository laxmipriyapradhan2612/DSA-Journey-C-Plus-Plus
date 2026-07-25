// USING TWO VECTORS PREFIX AND SUFFIX 
// TIME COMPLEXITY--> O(n)
#include <iostream>
#include<vector>
using namespace std;
vector<int> productExceptSelf(vector<int> nums){
    int n= nums.size();

    vector<int> ans(n,1);
    vector<int> prefix(n,1);
    vector<int> suffix(n,1);
    // PREFIX VECTOR 
    for(int i=1; i<n; i++){
        prefix[i]= prefix[i-1]*nums[i-1];
    }

    // suffix vector
    for(int i= n-2; i>=0; i--){
        suffix[i]= suffix[i+1]*nums[i+1];
    }

    //ans vector--> multiplication of prefix vector elements and suffix vector elements
    for(int i=0; i<n; i++){
        ans[i]= prefix[i]*suffix[i];
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