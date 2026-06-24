//CONVERSION OF BINARY NUMBER TO THE DECIMAL NUMBER
#include <iostream>
using namespace std;
int binToDecimal(int binNum){
    int decNum=0, pow=1; // 2^0 -> 2^1 -> 2^2,...
    while(binNum>0){
        int rem= binNum%10;
        binNum=binNum/10;
        decNum+= rem*pow;
        pow*=2;
    }
    return decNum;
}
int main(){
    int binNum;
    cout<<"Enter the Binary number: ";
    cin>>binNum;
    int decNum= binToDecimal(binNum);
    cout<<"Decimal number= "<<decNum<<endl;
    return 0;
}
