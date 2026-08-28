 //CHARACTER ARRAYS (C STRINGS)
 # include <iostream>
 #include <cstring>
 using namespace std;
 int main(){
     char str[]= {'a', 'b', 'c','\0'}; // null character neccesary
     char str2[]= "Laxmi"; // string literals
     cout<< str << endl; // str is a constant pointer now
     cout<< str2 << endl;

     cout << "Length of string 1: "<<strlen(str) << endl;
     cout<< "Length of string 2: "<< strlen(str2)<< endl;
     return 0;

 }

//input by user  --> print the string
# include <iostream>
#include <cstring>
using namespace std;
int main(){
    char str[100];
    cout<<"Enter a character array: ";
    cin.getline(str, 100);
    cout<<"Output: "<< str<< endl;
    return 0;
}

// Input by user --> print each character of the string
# include <iostream>
#include <cstring>
using namespace std;
int main(){
    char str[12];
    cout<<"Enter a character array: ";
    cin.getline(str, 12);
    for(int i=0; str[i]!= '\0'; i++){
        cout<< str[i] <<" ";
    }
    cout<<endl;
    return 0;
}
