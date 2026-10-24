/* average/ practical tc--> 0(nlogn)
worst cases: when the pivot is either the largest or the smallect value--> o(n^2)
space complexity--> O(1)
*/
#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &arr, int st, int end){
    int idx=st-1 , pivot= arr[end];

    for(int j=st;j <end; j++){
        if (arr[j]<= pivot){
            idx++;
            swap(arr[j], arr[idx]);
        }
    }
    idx++;
    swap(arr[end], arr[idx]);
    return idx;

}
void quickSort(vector<int> &arr, int st, int end){
    if(st<end){
        int pivIdx= partition(arr, st, end);

        quickSort(arr, st, pivIdx-1); // left half of the pivot
        quickSort(arr, pivIdx+1, end); // right half of the pivot

    }
}
int main(){
    vector<int> arr={11,4,5,6,7,2,3};
    quickSort(arr, 0, arr.size()-1);
    for(int val: arr){
        cout<< val<< " ";
    }
    cout<<endl;
    return 0;
}