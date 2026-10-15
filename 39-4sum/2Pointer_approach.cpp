#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<vector< int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        int n= nums.size();
        sort(nums.begin(), nums.end());

        for(int i=0; i< n; i++){
            if(i>0 && nums[i] == nums[i-1]){
                continue ;
            }

            for(int j=i+1; j<n;j++){
                if(j>i+1 && nums[j]== nums[j-1]){
                    continue;
                }
                int p= j+1, q= n-1;
                while(p<q){
                    long long int sum= (long long int) nums[i]+ (long long int)nums[j]+ (long long int) nums[p]+ (long long int) nums[q];
                    if (sum > target){
                        q--;
                    }else if(sum< target){
                        p++;
                    }else{  // sum== target
                        ans.push_back({nums[i], nums[j], nums[p], nums[q]});
                        p++;
                        q--;
                        while(p< q && nums[p]== nums[p-1]) p++;
                        while(p< q && nums[q]== nums[q+1]) q--;
                    }
                }
                
            }
        }
        return ans;
    }

    int main(){
        vector<int> nums= {1, 0, -1, 0, -2, 2};
        int target= 0;
        vector<vector<int>> vec= fourSum(nums, target);
        for(int i=0; i<=vec.size(); i++){
            for(int j=0; j<=vec.size(); j++){
                cout<< vec[i][j]<< " ";
            }
            cout<<endl;
        }
        return 0;
    }