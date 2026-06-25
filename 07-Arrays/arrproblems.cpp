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
}*/

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
}