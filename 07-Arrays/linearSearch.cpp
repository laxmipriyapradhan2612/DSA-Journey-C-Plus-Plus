//LINEAR SEARCH OF ELEMENT INSIDE THE ARRAY
//FINDING THE SMALLEST VALUE AND THE INDEX WHERE IT IS INSIDE THE ARRAY
#include <iostream>
using namespace std;
int linearSearch(int arr[], int sz, int target){
    for(int i=0; i<sz; i++){
        if(arr[i]== target){
            return i;    // returns index value when target found inside the array
        }
    }
    return -1; // returns -1 if the target is NOT FOUND inside the array
}
int main(){
    int arr[]={2,8,15,1,3};
    int size= 5;
    int target= 3;
    int value= linearSearch(arr, size, target);
    cout<<"Index value= "<<value<<endl;
    return 0;
}