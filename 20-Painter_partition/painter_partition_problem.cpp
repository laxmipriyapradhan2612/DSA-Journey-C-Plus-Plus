/*Given are N boards of length of each given in the form of an array, and M painters 
such that each painter takes 1 unit of time to paint each unit of the board.

The task is to find the minimum time to paint all the boards under the constraints
that any painter will paint continuous section of board.
*/

#include <iostream>
#include <climits>
#include <vector>
using namespace std;

bool isPossible(vector <int> arr, int n, int m, int maxAllowedTime){
    int painters=1, time=0;

    for(int i=0; i<n; i++){
        if(arr[i]> maxAllowedTime){  // corner case
            return false;
        }
        if(time+ arr[i]<= maxAllowedTime){
            time = time+ arr[i];
        }else{
            painters++;
            time = arr[i];
        }
    }
    if(painters > m){
        return false;
    }else{
        return true;
    }

}
int minTimeToPaint(vector <int> &arr, int n, int m){
    int sum=0, maxVal= INT_MIN;
    //sum
    for(int i=0; i<n; i++){
        sum+= arr[i];
        maxVal= max(maxVal, arr[i]);
    }
    int st= maxVal, end= sum, ans=-1;
    while(st<=end){
        int mid= st + (end-st)/2;

        if(isPossible(arr, n, m, mid)){
            ans=mid;   // possible val--> check for lower value on left side
            end= mid-1;
        }else{        // check on right side for the possible value
            st= mid+1;
        }
    }
    return ans;
}

int main(){
    vector<int> arr= {40,30,10,20};
    int n= arr.size();
    int m=2;
    int ans= minTimeToPaint(arr, n, m);
    cout<< ans << endl;
    return 0;
}