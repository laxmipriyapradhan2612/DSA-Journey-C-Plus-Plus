//RECURSIVE METHOD
// BINARY SEARCH --> SIMPLE ITERATIVE METHOD
// TIME COMPLEXITY--> O(logn)
#include <iostream>
#include <vector>
using namespace std;
int recbinarySearch(vector<int>arr, int target,int st, int end){
    if(st<=end){
        int mid= st +(end-st)/2;
        if(target> arr[mid]){   // 2nd half
            return recbinarySearch(arr, target, mid+1, end);
        }else if(target<arr[mid]){ // 1st half
            return recbinarySearch(arr, target, st, mid-1);
        }else{
            return mid;
        }
        return -1;
    }
}
int main(){
    vector<int> arr= {-1, 0, 3, 4, 5, 9, 12};
    int target=12;
    cout<<recbinarySearch(arr, target, 0, 6)<<endl;
    return 0;
}
