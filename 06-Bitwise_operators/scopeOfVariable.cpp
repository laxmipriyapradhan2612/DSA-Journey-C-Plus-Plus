// LOCAL SCOPE OF VARIABLE IS --> INSIDE if-else LOOPS, FUNCTIONS,BLOCK OF CODES i.e {INSIDE THE CURLY BRACES}
//EXAMPLES 
#include <iostream>
using namespace std;
int main(){
    if(3>1){
        int x=10;
    }
    //cout<<x<<endl; --> //undefined indentifier error as x variable is local to the if block
    return 0;
}

//INSSIDE FOR STATEMENT
#include <iostream>
using namespace std;
int main(){
    for(int i=0; i<4; i++){
        int x=10;
        cout<<x<<endl;
    }
    //cout<<i<<endl; --> //unidentified identifier
    //cout<<x<<endl; --> //unidentified identifier
    return 0;
}


//BLOCK OF CODES
#include <iostream>
using namespace std;
int main(){
    {
        int x=2;
    }
    //cout<<x<<endl;  --> // identifier error
    return 0;
}

//LOCAL VARIABLES IN FUNCTIONS
#include <iostream>
using namespace std;
int fun(){
    int x=10;
}
int main(){
    fun();
    //cout<<x<<endl;  --> // x variable is local to the function fun()
    return 0;
}


//GLOBAL VARIABLE
#include <iostream>
using namespace std;
int x=10;       // Global variablei.e can be accessed inside the main() and any other function
int fun(){
    cout<<x<<endl;  //10
}
int main(){
    cout<<(x+10)<<endl; //10+10 --> 20
    return 0;
}