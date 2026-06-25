//FUNCTION TO CALCULATE SUM AND PRODUCT OF ALL NUMBERS IN AN ARRAY
/*#include <iostream>
using namespace std;
int arrSum(int arr[], int sz){
    int sum=0;
    for(int i=0; i<sz; i++){
        sum=sum+arr[i];
    }
    return sum;
}
int arrProd(int arr[], int sz){
    int mul=1;
    for(int i=0; i<sz; i++){
        mul=mul*arr[i];
    }
    return mul;
}
int main(){
    int arr[]={1,2,3,4,5};
    int size=5;
    int sum=arrSum(arr, size);
    int prod=arrProd(arr, size);
    cout<<"Sum= "<<sum<< endl;
    cout<<"Product= "<<prod<<endl;
    return 0;
}

//FUNCTION TO SWAP MAX AND MIN NUMBER OF AN ARRAY
#include <iostream>
#include<climits>
using namespace std;

int min( int arr[], int sz){
    int smallest=INT_MAX;
    int pos;
    for(int i=0; i<sz; i++){
        if(arr[i]<smallest){
            smallest= arr[i];
            pos=i;
        }
    }
    return pos;
}
int max( int arr[], int sz){
    int largest= INT_MIN;
    int pos;
    for(int i=0; i<sz; i++){
        if(arr[i]>largest){
            largest=arr[i];
            pos=i;
        }
    }
    return pos;
}
int main(){
    int arr[]={1,2,3,4,5};
    int size=5;
    int maxPos= max(arr,size);
    int minPos= min(arr, size);
    swap(arr[minPos], arr[maxPos]);
    for(int i=0; i<size; i++){
        
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}*/

//FUNCTION TO PRINT ALL THE UNIQUE VALUES IN THE ARRAY
#include <iostream>
using namespace std;
void unique(int arr[], int sz){
    for(int i=0; i<sz; i++){
        int count=0;
        for(int j=0; j<sz; j++){
            if(arr[i]==arr[j]){
                count==1;
                break;
            }
        }
        if(count==0){
            cout<<arr[i]<<" ";
        }
    }
    cout<<endl;
}

int main(){
    int arr[]={1,2,3,4,1,2};
    int size=6;
    return 0;
}