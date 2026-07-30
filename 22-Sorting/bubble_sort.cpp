// BUBBLE SORTING
// TIME COMPLEXITY --> O(n^2)
#include <iostream>
using namespace std;
void bubbleSort(int arr[], int n){
    for(int i=0; i<n-1; i++){    //1*n--> n
        bool isSwap= false;
        for(int j=0; j<n-i-1; j++ ){  // n*n--> n^2
            if(arr[j]> arr[j+1]){
                swap(arr[j], arr[j+1]);
                isSwap= true;
            }
        }
        if(! isSwap){ // array is already sorted
            return;
        }
    }
}

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<< arr[i]<< " ";
    } cout<< endl;
}

int main(){
    int arr[]= {4, 1, 5, 2, 3};
    int n= 5;
    bubbleSort(arr, n);
    printArray(arr, n);
    return 0;
}