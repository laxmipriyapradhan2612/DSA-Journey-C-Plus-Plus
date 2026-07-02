// CALCULATING x^n USING BINARY EXPONENTIATION
#include <iostream>
#include <vector>
using namespace std;
double myPow(double x, int n){
    if(n==0) return 1.0;         //corner cases without which also our program will work perfectly
    if(n==1) return x;
    if(x==0) return 0.0;
    if(x==1) return 1.0;
    if(x==-1 && n%2==0) return 1.0;
    if(x==-1 && n%2!=0) return -1.0;
    long binform=n;
    if(n<0){      // for negative power of x
        x=1/x;
        binform=-binform;
    }
    double ans=1;
    while(binform>0){
        if(binform%2 == 1){
            ans=ans*x;
        }
        x=x*x;
        binform/=2;
    }
    return ans;
}
int main(){
    double x;
    cout<<"Enter the value of x= ";
    cin>>x;
    int n;
    cout<<"Enter the value of n= ";
    cin>>n;
    cout<<"The value of x^n= "<<myPow(x,n)<<endl;
    return 0;

}