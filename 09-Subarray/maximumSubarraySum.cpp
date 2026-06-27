// BRUTE FORCE APPROACH
//FOR FINDING THE MAXIMUM SUM OF SUBARRAY
#include <iostream>
#include <climits>
using namespace std;
int main(){
    int arr[]= {1,2,3,4,5};
    int n=5;
    int maxSum= INT_MIN;
    for(int st=0; st<n; st++){     //Time complexity--> O(n^3)
        int currSum=0;
        for(int end=st; end<n; end++){
            currSum= currSum+arr[end];
            maxSum=max(currSum, maxSum);
        }
        
    }
    cout<<"Maximum sum= "<<maxSum<<endl;
   
    return 0;
}

//KADANE'S ALGORITHM (MOST OPTIMISED)
#include <iostream>
#include <climits>
using namespace std;
int main(){
    int arr[]= {1,2,3,4,5};
    int n=5;
    int maxSum= INT_MIN;
    int currSum=0;
    for(int i=0; i<n; i++){
        currSum=currSum+arr[i];
        maxSum=max(currSum, maxSum);
        if(currSum<0){
            currSum=0;
        }
       
    }
    cout<<"Maximum sum= "<<maxSum<<endl;
    return 0;
}
