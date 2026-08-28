 //Reversing the string using the function
 # include <iostream>
 #include <string>
 #include <algorithm>
 using namespace std;
 int main(){
     string str="Hello";
     reverse(str.begin(), str.end());
     cout<< "Reverse string: "<< str<< endl;
     return 0;
 }

// two pointer approach
# include <iostream>
#include <string>
using namespace std;
int main(){
    string str="Hello";
    int st=0, end= str.length()-1;
    while(st< end){
        swap(str[st++], str[end--]);
    }
    cout<< str<< endl;
    return 0;
}