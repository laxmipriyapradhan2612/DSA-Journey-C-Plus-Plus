// FUNCTION TO CALCULATE THE SUM OF "n" NUMBERS
#include <iostream>
using namespace std;
int sumOfn(int n){
    int sum=0;
    for(int i=0; i<n; i++){
        sum=sum+i;
    }
    return sum;
}
int main(){
    int num;
    cout<<"Enter number of terms: ";
    cin>>num;
    cout<<sumOfn(num)<<endl;
    return 0;
}

//FUNCTION TO CALCULATE N FACTORIAL
#include <iostream>
using namespace std;
int factorial(int n){
    int fact=1;
    for(int i=0; i<n; i++){
        fact= fact*i;
    }
    return fact;
}
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    cout<<"Factorial= "<<factorial(num)<<endl;
    return 0;
}

//FUNCTION TO CALCULATE THE SUM OF THE DIGITS OF A NUMBER
#include <iostream>
using namespace std;
int sumOfDigit(int n){
    int digitSum=0;
    while(n>0){
        int rem= n%10;
        n=n/10;
        digitSum+=rem;
    }
    return digitSum;
}
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    cout<<"Sum of the digits= "<<sumOfDigit(num)<<endl;
    return 0;
}

// FUNCTION TO CALCULATE nCr
#include <iostream>
using namespace std;
int factorial(int n){     //To calcuate the factorial of n, r, (n-r)
    int fact=1;
    for(int i=0; i<n; i++){
        fact*=i;
    }
    return fact;
}
int nCr(int n, int r){
    int fact_n= factorial(n); //Calling the function factorial
    int fact_r= factorial(r);
    int fact_nmr= factorial(n-r);
    int nCr= fact_n/(fact_r*fact_nmr); //Formula tio calculate the nCr
    return nCr;
}
int main(){
    int n,r;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<"Enter the value of r: ";
    cin>>r;
    cout<<"The value of nCr= "<<nCr(n,r)<<endl;
    return 0;
}

//FUNCTION TO CHECK PRIME NUMBER
#include <iostream>
using namespace std;
int Prime(int n){
    bool isPrime=true;
    for(int i=2; i*i<= n;i++){
        if(n%i==0){
            isPrime= false;
            break;
        }
    }
    if(isPrime==true){
        return 1;
    }else{
        return 0;
    }
}
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    int value= Prime(num);
    if(value==1){
        cout<<"Prime number."<<endl;
    }else{
        cout<<"Non Prime number."<<endl;
    }

    return 0;
}

//PROGRAM TO FIND ALL PRIME NUMBERS FROM 1 TO N
#include <iostream>
using namespace std;
void PrimeN(int N){
    for(int i=2; i<N; i++){
        bool isPrime=true;
        for(int j=2; j*j<=i; j++){
            if(i%j==0){
                isPrime= false;
                break;
            }
        }
        if(isPrime==true){
            cout<<i<<" ";
        }
        
    }

}
int main(){
    int num;
    cin>>num;
    PrimeN(num);
    return 0;
}

//FUNCTION TO PRINT FIBONACCI SERIES
#include <iostream>
using namespace std;
void fibonacci(int n){
    int a=0, b=1;
    int c;
    for(int i=0;i<n; i++){
        cout <<a<<" ";
        c=a+b;
        a=b;
        b=c;
    }
}
int main(){
    int num;
    cout<<"Enter the no. of terms: ";
    cin>>num;
    fibonacci(num);
    return 0;
}