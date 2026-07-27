/*You are given an integer mountain array arr of length n
where the values increases to a peak element & then decreases
RETURN THE INDEX OF THE PEAK ELEMENT
Time complexity--> O(log(n))
e.g: input: arr= [0,1,0]
output: 1
*/

#include <iostream>
#include <vector>
using namespace std;
int peakIndexInMountainArray(vector<int>&A){
    int n= A.size();
    int st=1, end= n-2;  // as the 0 element and n-1 element can never be a peak value --> corner case
    while(st<= end){
        int mid = st + (end-st)/2;
        if(A[mid-1] <A[mid] && A[mid]> A[mid+1]){
            return mid;
        }else if(A[mid-1]< A[mid]){  // peak val--> Right side
            st= mid+1;
        }else{
            end= mid-1;
        }

    }
    return -1;
}
int main(){
    vector<int> nums= {0, 3, 8, 9, 5, 2};
    int ans= peakIndexInMountainArray(nums);
    cout<< ans << endl;
    return 0;
}