/*Prior to being passed to a function , 
nums is possibly rotated at an unknown pivot index
[0, 1, 2, 4, 5, 6, 7]--> [4, 5, 6, 7, 0, 1, 2]
*/
#include <iostream>
#include <vector>
using namespace std;
int search(vector<int> nums, int target){
    int st=0, end= nums.size()-1;
    while(st<=end){
        int mid= st+ (end-st)/2;
        if(nums[mid]==target){
            return mid;
        }
        if( nums[st]<=nums[mid]){  // arr is-->sorted on left side
            if(nums[st]<= target && target <= nums[mid]){ // if true target present on left side
                end= mid-1;
            }else{
                st= mid+1;
            }
        }else{ // arr is-->sorted on right side
            if(nums[mid]<= target && target <= nums[end]){ // if true target present on right side
                st=mid+1;
            }else{
                end= mid-1;
            }
        }   
    }
    return -1;
}
int main(){
    vector<int> nums= {3, 4, 5, 6, 7, 0, 1, 2};
    int tar= 0;
    cout<< search(nums, tar)<< endl;
    return 0;
}
