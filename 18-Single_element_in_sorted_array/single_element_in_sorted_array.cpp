// arr= [1, 1, 2, 3, 3, 4, 4, 8, 8]--> return 2 
// Time complexity --> O(log(n))
#include <iostream>
#include <vector>
using namespace std;
int singleElement(vector<int>&A){
    int n= A.size();
    int st=0, end= n-1;
    while(st<=end){
        int mid= st + (end-st)/2;
        // Corner cases
        if(mid == 0 && A[0] != A[1]) return A[0];
        if(mid == n-1 && A[n-1] != A[n-2]) return A[n-1];

        // if peak element is present at mid only
        if(A[mid-1] != A[mid] && A[mid+1]!= A[mid]){
            return A[mid];
        }

        //If peak element is not at mid--> to check at either left or right
        if(mid % 2== 0){   // even elements on each side of mid
            if(A[mid-1]==A[mid]){
                end= mid-1;
            }else{
                st= mid+1;
            }
        }else{  // odd elements on the either side of the mid
            if(A[mid-1]==A[mid]){
                st= mid+1;   // peak element present --> right side
            }else{
                end= mid-1;  // peak element--> left side
            }
        }
    }

}
int main(){
    vector<int> nums= {1, 1, 2, 3, 3, 4, 4, 8, 8};
    int ans= singleElement(nums);
    cout<< ans << endl;
    return 0;
}