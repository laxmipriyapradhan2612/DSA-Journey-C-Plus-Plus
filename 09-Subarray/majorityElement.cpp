// BRUTE'S APPROACH  (TIME COMPLEXITY--> O(n^2))
// Majority element is the element that appears more than n/2 times.
#include<iostream>
#include<vector>
using namespace std;
int nums(vector<int> nums){
    int n= nums.size();
    for( int val :nums){
        int freq=0;
        for(int el: nums){
            if(el==val){
                freq++;
            }
        }
        if(freq>n/2){
            return val;
        }
    }
    
}
int main(){
    vector<int>vec={1,2,2,1,1,3};
    int value= nums(vec);
    cout<<"Maximum repeated element= "<<value<<endl;
    return 0;


}
