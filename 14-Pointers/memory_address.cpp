//INITIALIZATION AND THE SYNTAX OF POINTERS

//INTEGER TYPE POINTER
#include <iostream>
using namespace std;
int main(){
    int a=10;
    int* ptr= &a;  // ptr stores memory address of int a variable
    cout<< ptr<< endl;
    cout<< &a<< endl;
    cout<< *ptr<< endl;
    cout<< &ptr<< endl;
    return 0;
}

//FLOAT TYPE POINTER
#include <iostream>
using namespace std;
int main(){
    float price=100.25;
    float* ptr= &price;  // ptr stores memory address of int a variable
    cout<< ptr<< endl;
    cout<< &price << endl;
    return 0;
}

//POINTER TO POINTER
#include <iostream>
using namespace std;
int main(){
    int a= 10;
    int* ptr = &a;
    int** parPtr= &ptr; // parent pointer stores the memory address of ptr
    cout<< &ptr << endl;
    cout<< parPtr << endl;
    return 0;
}

// DEREFERNCE OPERATOR
#include <iostream>
using namespace std;
int main(){
    int a= 10;
    int* ptr= &a; // 100--> mem address of a
    cout<< *(&a)<< endl;  // &a--> mem address of a, *(&a)--> value present at mem address of a --> 10
    cout<< *ptr << endl; //val present at 100 mem adress --> 10
    return 0;
}
