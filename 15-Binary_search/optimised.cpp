// BINARY SEARCH --> SIMPLE ITERATIVE METHOD
// OPTIMISED METHOD TO SOLVE THE PROBLEM OF OVERFLOW OF VALUES ON HIGHER (INT) INDEX VALUE 
#include <iostream>
#include <vector>
using namespace std;
int binarySearch(vector<int>arr, int target){
    int st=0, end= arr.size()-1;
    while(st<=end){
        int mid= st + (end-st)/2;  // only changing the formula for mid--> optimization
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
    vector<int> arr= {-1,0,3, 5, 9, 12};
    int target=0;
    cout<<binarySearch(arr, target)<<endl;
    return 0;
}
