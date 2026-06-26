//Given an non-empty array of integers nums[], every element appears twice except for one. find that single one using the linear time complexity
#include <iostream>
#include <vector>
using namespace std;
int unique(vector<int>nums){
    int value=0;
    for(int val: nums){
        value= value^val;
    }
    return value;

}
int main(){
    vector<int> vec={4,1,2,1,2,4,6,3,3};
    int unique_val= unique(vec);
    cout<<"Unique value inside vector= "<<unique_val<<endl;
    return 0;
}