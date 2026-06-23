// if-else Syntax
    /*if(condition){  //if condition is true then statement 1 is executed
        Statement 1;
    }else{
        Statement 2; // if condition is false then else block executes
    }*/

//TO CHECK ELIGIBILITY FOR VOTING
#include <iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter the age: ";
    cin>>age;
    if(age>=18){
        cout<<"Eligible for voting\n";
    }else{
        cout<<"Not Eligible for voting\n";
    }
    return 0;
}

// TO CHECK WHETHER A NUMBER IS ODD OR EVEN
#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    if(num%2== 0){
        cout<<"The number is Even.\n";
    }else{
        cout<<"The number is Odd.\n";
    }
    return 0;
}

//if-elseif-else STATEMENTS
#include <iostream>
using namespace std;
int main(){
    double marks;
    cout<<"Enter the marks: ";
    cin>>marks;
    if(marks>=90){
        cout<<"Grade A\n";
    }else if(marks>=80 && marks<90){
        cout<<"Grade B\n";
    }else{
        cout<<"Grade C\n";
    }
    return 0;
}

//FIND CH IS UPPERCASE OR LOWERCASE
#include <iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter character: ";
    cin>>ch;
    if(ch>= 'A' && ch<='Z'){      //We can also use ASCII values i.e if(ch>= 65 && ch<=90)
        cout<<"Uppercase letter\n";
    }else{
        cout<<"Lowercase letter\n";
    }
    return 0;
}

//TERNARY STATEMENT- Substitution of if-else statement
#include <iostream>
using namespace std;
int main(){
    int n=45;
    cout<<(n>=0 ? "Positive number.": "Negative number.")<<endl; //n=45 --> 45>0 --> Positive number.
    return 0;
}

