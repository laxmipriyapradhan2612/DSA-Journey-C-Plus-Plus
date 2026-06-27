// RETURN PAIR IN AN SORTED ARRAY WITH A TARGET SUM
// BRUTE APPROACH
#include <iostream>
#include <vector>
using namespace std;
vector<int> pairSum(vector<int>nums, int target){
    vector<int> ans;
    int n= nums.size();
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(nums[i]+nums[j]== target){
                ans.push_back(nums[i]);
                ans.push_back(nums[j]);
                return ans;
            }
        }
    }
}
int main(){
    vector<int> vec={2,7,11,15};
    int target= 9;
    vector<int>val= pairSum(vec, target);
    cout<<val[0]<<" "<<val[1]<<endl;
    return 0;
}

//2 POINTER APPROACH(OPTIMISED APPROACH)
#include <iostream>
#include <vector>
using namespace std;
vector<int> pairSum(vector<int>nums, int target){
    vector<int> ans;
    int n= nums.size();
    int st=0, end=n-1;
    while(st<end){
        int pairSum= nums[st]+nums[end];
        if(pairSum>target){
            end--;
        }else if(pairSum<target){
            st++;
        }else{
            ans.push_back(nums[st]);
            ans.push_back(nums[end]);
            return ans;
        }
    }
}
int main(){
    vector<int> vec={2,7,11,15};
    int target= 13;
    vector<int>val= pairSum(vec, target);
    cout<<val[0]<<" "<<val[1]<<endl;
    return 0;
}