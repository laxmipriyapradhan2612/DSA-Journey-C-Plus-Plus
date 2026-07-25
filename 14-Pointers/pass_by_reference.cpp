//PASS BY REFERENCE USING POINTERS 
#include <iostream>
using namespace std;
void changeA(int* ptr){
    *ptr=20; // value of a --> 20
}
int main(){
    int a=10;
    changeA(&a);  // a-->20
    cout<< "Value of a inside main function = "<< a << endl;
    return 0;
}

//PASS BY REFERENCE USING ALIAS
#include <iostream>
using namespace std;
int changeA(int &b){  //&b--> alias of a
    b=10;
}
int main(){
    int a= 5;
    changeA(a);  // no need to pass memory address of a
    cout<<"value of a inside main function= "<< a << endl;
    return 0;
}
