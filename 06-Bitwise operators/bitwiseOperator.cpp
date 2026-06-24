//BITWISE AND (&)
#include <iostream>
using namespace std;
int main(){
    int a, b;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;
    cout<<(a&b)<<endl; //0&0-->0, 0&1-->0, 1&0--> 0, 1&1-->1
    return 0;
}

//BITWISE OR (|)
#include <iostream>
using namespace std;
int main(){
    int a, b;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;
    cout<<(a|b)<<endl; //0|0-->0, 0|1-->1, 1|0--> 1, 1|1-->1
    return 0;
}

//BITWISE XOR
#include <iostream>
using namespace std;
int main(){
    int a, b;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;
    cout<<(a^b)<<endl; //0^0-->0, 0^1-->1, 1^0-->1, 1^1-->0
    return 0;
}

//BITWISE LEFT SHIFT
#include <iostream>
using namespace std;
int main(){
    int a, b;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;
    cout<<(a<<b)<<endl; //shifts b times towards the left
    return 0;
}

//BITWISE RIGHT SHIFT
#include <iostream>
using namespace std;
int main(){
    int a, b;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;
    cout<<(a>>b)<<endl; //Shifts b times towards the right
    return 0;
}