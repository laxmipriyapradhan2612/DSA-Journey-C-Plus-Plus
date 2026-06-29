// BRUTE'S APPROACH  (TIME COMPLEXITY--> O(n^2))
// Majority element is the element that appears more than n/2 times.
/*#include<iostream>
#include<vector>
using namespace std;
int majority(vector<int> nums){
    int n=nums.size();
    for(int val:nums){
        int freq=0;
        for(int el: nums){
            if(el== val){
                freq++;
            }
        }
        if(freq>n/2){
            return val;
        }


    }
    return -1;
}
int main(){
    vector<int> vec= {2,2,1,1,1,2,2};
    int value= majority(vec);
    cout<<"Majority element= "<<value<<endl;
    return 0;
}*/

//optimised method by sortinG
/*#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int majority(vector<int> nums){
    int n= nums.size();
    //sorting
    sort(nums.begin(),nums.end());
    //freq count
    int freq=1;
    int ans= nums[0];
    for(int i=1; i<n; i++){
        if (nums[i]== nums[i-1]){
            freq++;
        }else{
            freq=1; 
            ans=nums[i];
        }
    }
    return ans;

}
int main(){
    vector<int> vec= {2,2,1,1,1,2,2};
    int value= majority(vec);
    cout<<"Majority element= "<<value<<endl;
    return 0;
}*/

//MOORE'S VOTING ALGORITHM
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int majority(vector<int> nums){
    int n=nums.size();
    int freq=0, ans=0;
    for(int i=0; i<n; i++){
        if(freq==0){
            ans= nums[i];
        }
        if(ans= nums[i]){
            freq++;
        }else{
            freq--;
        }
    }
    int count=0;           //this is done of the vector or array when there exists no majority el
    for(int val: nums){
        if(val==ans){
            count++;
        }
    }
    if(count>n/2){
        return ans;
    }else{
        return -1;
    }
}
int main(){
    vector<int> vec= {1,2,3,4};
    int value= majority(vec);
    cout<<"Majority element= "<<value<<endl;
    return 0;
}