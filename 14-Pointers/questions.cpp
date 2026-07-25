//Q1
#include <iostream>
using namespace std;
int main(){
    int a= 5;
    int *p= &a; // mem address of a-->100
    int **q= &p;// mem address of p-->500
    cout<< *p << endl;   //5
    cout<< **q << endl;  // 5
    cout<< p << endl;    //100
    cout<< *q << endl;   // 100
    return 0;
}

//Q2
#include <iostream>
using namespace std;
int main(){
    int* ptr2; //100
    int* ptr1= ptr2+2;// 100+8--> 108
    cout<< ptr1-ptr2 <<endl; // difference in bits--> 2
    return 0;
}

//Q3
//Q1
#include <iostream>
using namespace std;
int main(){
    int arr[]= {10, 20, 30, 40};
    int* ptr= arr; // mem address of 10
    cout<< *(ptr +1)<< endl; //20
    cout<< *(ptr+3)<< endl;  //40
    ptr++;
    cout<< *ptr<<endl; //20
    return 0;
}