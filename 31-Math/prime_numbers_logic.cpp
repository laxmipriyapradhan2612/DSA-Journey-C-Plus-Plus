// Simple Logic of the PRIME NUMBERS

#include <iostream>
#include<string>
#include<vector>
using namespace std;

// simple Prime no. logic:
string isPrime(int n){
    for(int i=2; i*i <=n; i++){
        if(n%i ==0){
            return "Non Prime.";
        }
    }
    return "Prime.";
}

//To find prime numbers in a range
// given int-->n, find all the prime numbers less than n
//  counting the prime numbers and using SIEVE ERATOSTHENES APPROACH
int countPrimes(int n){
    vector<bool> isPrime(n+1, true);
    int count=0;
    for(int i=2; i<n; i++){
        if(isPrime[i]){
            count++;
            for(int j=i*2; j<n; j=j+i){
                isPrime[j]= false;
            }
        }
    }
    return count;

}
int main(){
    int number=67;
    int n= 10;
    cout<<number <<" is " << isPrime(number)<<endl;
    cout<<"Number of prime numbers in the range " <<n<< "="<< countPrimes(n)<<endl;

    return 0;
}



