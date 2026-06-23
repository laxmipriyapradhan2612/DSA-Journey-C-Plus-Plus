// BOILER PLATE CODE
#include <iostream>
using namespace std;
int main(){
    return 0;
}

// TYPE CONVERSION (IMPLICIT)
#include <iostream>
using namespace std;
int main(){
    char grade='A';
    int value= grade;
    cout<<value<<endl; //ASCII value of A=65 --> value=65
    return 0;
}

// TYPE CASTING (EXPLICIT)
#include <iostream>
using namespace std;
int main(){
    double price=100.98;
    int newPrice= int(price); //newPrice= 100 (values after decimal are ignored)
    return 0;
}

// OPERATORS
// 1. ARITHMETIC OPERATORS
#include <iostream>
using namespace std;
int main(){
    int a=10, b=5;
    cout<<"Sum="<< (a+b)<<endl; //15
    cout<<"Difference="<< (a-b)<<endl; //5
    cout<<"Multiplication="<< (a*b)<<endl; //50
    cout<<"Quotient="<< (a/b)<<endl; //2
    cout<<"Remainder="<< (a%b)<<endl; //0
    return 0;
}

// 2.RELATIONAL OPERATORS
#include <iostream>
using namespace std;
int main(){
    cout<<(3<5)<<endl; //true -->1
    cout<< (3>5)<<endl; //false -->0
    cout<< (3>=2)<<endl; //true -->1
    cout<< (3<=2)<<endl; //false -->0
    return 0;
}

// 3. LOGICAL OPERATORS
#include <iostream>
using namespace std;
int main(){
    cout<< ((3<1)||(3<5))<<endl; //1
    cout<< ((3>11)||(3>5))<<endl; //0
    cout<< !(3<1)<<endl; //1
    cout<< ((3<1)&&(3<5))<<endl; // 0
    cout<< ((3>1)||(3<5))<<endl; //1
    return 0;
}

// 4. UNARY OPERATORS
//Post Increment
#include <iostream>
using namespace std;
int main(){
    int a=10;
    int b=a++; //b is assigned to the value of a then a increments by 1
    cout<<"b= "<<b<<endl; //b=10
    cout<<"a= "<<a<<endl; //a=11
    return 0;
}

//Pre Increment
#include <iostream>
using namespace std;
int main(){
    int a=10;
    int b=++a; //a is incremented by 1 then value is assigned to b
    cout<<"b= "<<b<<endl; //b=11
    cout<<"a= "<<a<<endl; //a=11
    return 0;
}

// SUM OF TWO NUMBERS
#include <iostream>
using namespace std;
int main(){
    int a, b;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;
    int sum= a+b;
    cout<<"Sum= "<<sum<<endl;
    return 0;
}

