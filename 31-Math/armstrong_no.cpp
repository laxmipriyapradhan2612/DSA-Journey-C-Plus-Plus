#include <iostream>
using namespace std;

bool isArmstrong(int n){
    int copyNum= n;
    int sumOfCubes=0;
    while(n!=0){
        int dig= n%10;
        sumOfCubes+= (dig*dig*dig);
        n=n/10;
    }
    if(copyNum== sumOfCubes){
        return true;
    }else{
        return false;
    }
}

int main(){
    int n=153;
    cout<<isArmstrong(n)<<endl;
    return 0;
}
