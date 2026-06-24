//CONVERSION OF DECIMAL NUMBER TO THE BINARY NUMBER
#include <iostream>
using namespace std;
int decToBinary(int decNum){
    int binNum=0, pow=1; // 10^0 -> 10^1 -> 10^2,...
    while(decNum>0){
        int rem= decNum%2;
        binNum+= rem*pow;
        decNum=decNum/2;
        pow*=10;
    }
    return binNum;
}
int main(){
    int decNum;
    cout<<"Enter the decimal number: ";
    cin>>decNum;
    int binNum= decToBinary(decNum);
    cout<<"Binary number= "<<binNum<<endl;
    return 0;
}