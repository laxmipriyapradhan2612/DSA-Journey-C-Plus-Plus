// while LOOP

//PRINT NUMBER 1 TO 5
#include <iostream>
using namespace std;
int main(){
    int n=1;
    while(n<=5){
        cout<<n<<" "; //After every number space is printed
        n++;
    }
    cout<<endl;
    return 0;
}

//INFINITE LOOPS --> Ending condition is never false --> leads to memory full condition

// for LOOP
//SUM OF NUMBERS FROM 1 TO n
#include <iostream>
using namespace std;
int main(){
    int n;
    int sum=0;
    cout<<"Enter the value of n: ";
    cin>>n;
    for(int i=1; i<=n; i++){
        sum+=i;
    }
    cout<<"sum= "<<sum<<endl;
    return 0;
}

//USING break Statement
#include <iostream>
using namespace std;
int main(){
    int n=50, sum=0;
    for(int i=1; i<=n; i++){
        if(i==5){
            break;
        }
        sum+=i;
    }
    cout<<"Sum ="<<sum<<endl;
    return 0;
}

//SUM OF ODD NUMBERS
#include <iostream>
using namespace std;
int main(){
    int n, sumOdd=0;
    cout<<"Enter the value of n: ";
    cin>>n;
    for(int i=1; i<=n; i++){
        if(i%2!=0){        // number is not divisible by 2 --> odd number
            sumOdd+=i;
        }
    }
    cout<<"Sum of odd numbers= "<<sumOdd<<endl;
    return 0;
}

//SUM OF EVEN NUMBERS
#include <iostream>
using namespace std;
int main(){
    int n, evenSum=0;
    cout<<"Enter the value of n: ";
    cin>>n;
    for(int i=1; i<=n; i++){
        if(i%2 ==0){       // number is divisible by 2 --> rem=0 --> even number
            evenSum+=i;
        }
    }
    cout<<"Sum of even numbers= "<<evenSum<<endl;
    return 0;
}

//do while LOOP --> EXIT CONTROLLED LOOP
#include <iostream>
using namespace std;
int main(){
    do{
        cout<<"Hello World!"<<endl; // Hello World! gets printed for once even though the condiotion is false.
    }
    while(3>5);
    return 0;
}

//TO CHECK FOR A PRIME NUMBER (IMPORTANT)
#include <iostream>
using namespace std;
int main(){
    int n;
    bool isPrime=true;
    cout<<"Enter the value of n: ";
    cin>>n;
    for(int i=2; i<= (n-1); i++){ //instead we can check for(i=2; i*i<=n; i++)
        if(n%i==0){           // Non prime number
            isPrime= false;
            break;
        }
    }
    if(isPrime==true){
        cout<<"Prime number.\n";
    }else{
        cout<<"Non Prime number.\n";
    }
    return 0;
}
