/*Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.

There is only one repeated number in nums, return this repeated number.

You must solve the problem without modifying the array nums and using only constant extra space.

*/
//USING Slow-Fast POINTER APPROACH

#include <iostream>
#include <vector>
using namespace std;
int findDuplicate(vector<int>& arr) {
    // using slow- fast pointer
    int slow= arr[0], fast= arr[0];
    do{
        slow= arr[slow];  // slow-->+1
        fast= arr[arr[fast]];  //fast--> +2
    }while(slow!= fast);

    slow= arr[0];
    while(slow!= fast){
        slow= arr[slow]; //+1
        fast= arr[fast]; //+1
    }
    return slow;
    }

    int main(){
        vector<int> arr= {1, 3, 4, 2, 2};
        cout<< findDuplicate(arr)<< endl;
        return 0;
    }