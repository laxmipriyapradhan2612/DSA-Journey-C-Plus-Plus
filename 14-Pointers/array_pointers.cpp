#include <iostream>
using namespace std;
int main(){
    int arr[]={1, 2, 3, 4, 5};
    cout<< arr << endl; // arr--> mem address of index 0
    cout<< *arr << endl; //val present at 0 index--> 1
    int a=10;
    arr= &a; // gives error as arr is not modifiable
    return 0;
}

//ARRAY ARITHMETIC
#include <iostream>
using namespace std;
int main(){
    int arr[]={1, 2, 3, 4, 5};
    cout << *arr <<endl;     //1
    cout << *(arr+1) <<endl;  // 2
    cout << *(arr+2)<<endl;   // 3
    cout << *(arr+3) <<endl;  //4
    return 0;
}