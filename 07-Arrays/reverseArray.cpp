//REVERSING ARRAY USING TWO POINET METHOD
//FINDING THE SMALLEST VALUE AND THE INDEX WHERE IT IS INSIDE THE ARRAY
#include <iostream>
using namespace std;
void revArr(int arr[], int sz){
    int start=0;
    int end=sz-1;
    while(start<end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
int main(){
    int arr[5]={2,8,15,1,3};
    int size= 5;
    revArr(arr,size);
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}