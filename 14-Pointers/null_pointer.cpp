/*#include <iostream>
using namespace std;
int main(){
    int* ptr;
    cout<< ptr << endl; // gives garbage value 
    cout<< *ptr << endl; // gives any garbage value 
    return 0;
}*/

//  NULL POINTERS
#include <iostream>
using namespace std;
int main(){
    int* ptr=NULL;
    cout<< ptr << endl; // gives 0 output as there is no value
    cout<< *ptr << endl; // gives error as ptr does not point any value
    return 0;
}