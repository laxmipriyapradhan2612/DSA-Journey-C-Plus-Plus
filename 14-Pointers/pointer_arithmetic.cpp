//INCREMENT(++)/ DECREMENT(--)
/*#include <iostream>
using namespace std;
int main(){
    int a= 5;
    int* ptr= &a;
    cout<< ptr << endl;
    ptr++;
    cout<< ptr << endl; // 1 is added--> 4 bits of int
    return 0;
}*/

//ADD OR SUBTRACT
//Q1
#include <iostream>
using namespace std;
int main(){
    int a= 10;
    int* ptr= &a;
    cout<< ptr << endl;
    ptr+=2; // 2 int--> 8 bits added
    cout<< ptr <<endl;
    return 0;
}


// COMPARISON OF DIFF POINTERS(==, <=, >=, !=)
//Q1
#include <iostream>
using namespace std;
int main(){
    int* ptr1;
    int* ptr2;
    cout<< ptr1 << endl;
    cout << ptr2 << endl;
    cout<<(ptr1< ptr2)<< endl;
    cout << (ptr1> ptr2)<< endl;
    cout <<(ptr1== ptr2)<< endl;
    cout<< (ptr1!= ptr2)<< endl;
    return 0;
}