//GCD (Greatest Common Divisor)/ HCF 

#include <iostream>
using namespace std;

// Brute force approach
int gcd(int a, int b){
    int gcd=1;
    if(a==0) return b;
    if(b==0) return a;
    if(a==b) return a;
    for(int i=1; i<=min(a,b); i++){
        if(a%i==0 && b%i==0){
            gcd= i;
        }
    }
    return gcd;
}

//EUCLID'S ALGORITHM
int GCD(int a, int b){
    while(a>0 && b>0){
        if(a>b){
            a= a%b;
        }else{
            b= b%a;
        }
    }
    if(a==0) return b;
    else return a;
}

//LCM

int lcm(int a, int b){
    int gcd= GCD(a,b);
    int lcm= (a*b)/ gcd;
    return lcm;
}


int main(){
    int a =20, b=28;
    cout<<"GCD: "<< gcd(a,b)<<endl;
    cout<<"GCD: "<< GCD(a,b)<<endl;
    cout<<"LCM: "<< lcm(a,b)<<endl;
    return 0;
}