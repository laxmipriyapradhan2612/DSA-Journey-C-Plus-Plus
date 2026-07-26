// BINARY SEARCH --> SIMPLE ITERATIVE METHOD
// TIME COMPLEXITY--> O(logn)
#include <iostream>
#include <vector>
using namespace std;
int binarySearch(vector<int>arr, int target){
    int st=0, end= arr.size()-1;
    while(st<=end){
        int mid= (st+end)/2;
        if (target> arr[mid]){ //search--> right side of mid val
            st= mid+1;
        }else if(target<arr[mid]){ // search--> left side of mid val
            end= mid-1;
        }else{
            return mid;
        }
    }
    return -1;
}
int main(){
    vector<int> arr= {-1, 0, 3, 4, 5, 9, 12};
    int target=12;
    cout<<binarySearch(arr, target)<<endl;
    return 0;
}
