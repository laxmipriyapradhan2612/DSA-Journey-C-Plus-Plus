// Reversing a 32-bit integer and also check for overflow condition
// return 0 in the case of overflow of integer
#include <iostream>
#include <climits>
using namespace std;

int revNum(int n){
    int revNum=0;
    while(n!=0){
        int dig= n%10;
        if(revNum > INT_MAX/10 || revNum< INT_MIN/10){
            return 0;
        }
        revNum= revNum*10 + dig;  // condition for overflow--> *10
        n= n/10;
        
    }
    return revNum;
}

bool isPalindrome(int n){
    if(n<0) return false;
    if(revNum(n) == n){
        return true;
    }else{
        return false;
    }
}
int main(){
    int n= 121;
    cout<<"Is the number Palindrome: "<< isPalindrome(n)<< endl;
    return 0;
}