//optimal approach using unordered map
// return the indices of the elements whose sum is equal to the target

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
vector<int> twoSum(vector<int> &arr, int tar){
    unordered_map<int, int> m;
    vector<int> ans;
     for(int i=0; i< arr.size(); i++){
        int first= arr[i];
        int second= tar- first;
        if(m.find(second)!= m.end()){
            ans.push_back(i);
            ans.push_back(m[second]);
            break;
        }
        m[first]= i;
     }
     return ans;
}

int main(){
    vector<int> arr= {2, 7, 11, 15};
    int target= 9;
    for(int val: twoSum(arr, target)){
        cout<< val<< " ";
    }
    cout<< endl;
    return 0;
}