/*Assign C cows to N stalls such that the minimum distance between 
them is the largest possible.

RETURN THE LARGEST MINIMUM DISTANCE
*/
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool isPossible(vector <int> arr, int N, int C, int minAllowedDistance){
    int cows=1, lastStallPos= arr[0];

    for(int i=1; i<N; i++){
        if(arr[i]-lastStallPos >= minAllowedDistance){
            cows++;
            lastStallPos= arr[i];
        }
        if(cows== C){
            return true;
        }
    }
    return false;
    
}

int getDistance(vector <int> &arr, int N, int C){
    sort(arr.begin(), arr.end());
    
    int st=1, end= arr[N-1]- arr[0], ans=-1;
    while(st<=end){
        int mid= st + (end- st)/2;

        if(isPossible(arr, N, C, mid)){  // search on --> right side(larger val)
            ans= mid;
            st = mid+1;
        }else{   // search for lower val --> left side
            end= mid-1;
        }

    }
    return ans;
}
int main(){
    vector<int> arr= {1, 2, 8, 4, 9};
    int n= arr.size();
    int c=3;
    int ans= getDistance(arr, n, c);
    cout<< ans << endl;
    return 0;
}