/*There are N books, each ith book has A[i] number of pages.
You have to allocate books to M number of students so that the maximum number 
of pages allocated to a student is minimum.

1. Each book should be allocated to a student
2. Each student has to be allocated atleast one book
3. Allotment should be in contiguous order
Calc and return minimum possible number
*/

#include <iostream>
#include <vector>
using namespace std;

bool isValid(vector <int> arr, int n, int m, int maxAllowedPages){
    int students=1, pages=0;

    for(int i=0; i<n; i++){
        if(arr[i]> maxAllowedPages){  // corner case
            return false;
        }
        if(pages+ arr[i]<= maxAllowedPages){
            pages = pages+ arr[i];
        }else{
            students++;
            pages= arr[i];
        }
        

    }
    if(students > m){
        return false;
    }else{
        return true;
    }

}
int allocatedBooks(vector <int> &arr, int n, int m){
    if (m>n){
        return -1;
    }

    int sum=0;
    for(int i=0; i<n; i++){
        sum+= arr[i];
    }
    int ans=-1;
    int st=0, end= sum;  // Range of possible answers
    while(st<=end){
        int mid= st + (end- st)/2;
        if(isValid(arr, n, m, mid)){
            ans=mid;
            end= mid-1;  // if valid--> check on left for min value
        }else{
            st= mid+1;  // not valid --> check on right side
        }
    }
    return ans;
}

int main(){
    vector<int> arr= {2,1,3,4};
    int n= arr.size();
    int m=2;
    int ans= allocatedBooks(arr, n, m);
    cout<< ans << endl;
    return 0;
}