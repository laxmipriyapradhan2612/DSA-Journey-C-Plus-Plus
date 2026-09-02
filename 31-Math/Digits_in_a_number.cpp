#include <iostream>
using namespace std;

// DIGITS IN A NUMBER
void printDigit(int n){
    while(n!=0){
        int dig= n%10;
        cout<<dig<<endl;
        n=n/10;
    }
}


//COUNTING THE DIGITS IN A NUMBER
void countDigit(int n){
    int count=0;
    while(n!=0){
        int dig= n%10;
        count++;
        n=n/10;
    }
    cout<<"The number of digits: "<<count<<endl;
}

//SUM OF DIGITS OF A NUMBER
void sumDigit(int n){
    int sum=0;
    while(n!=0){
        int dig= n%10;
        sum+= dig;
        n=n/10;
    }
    cout<<"Sum of the digits: "<<sum<<endl;
}

int main(){
    int num= 3586;
    printDigit(num);
    countDigit(num);
    sumDigit(num);
    return 0;
}
