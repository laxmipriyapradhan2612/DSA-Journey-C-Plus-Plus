//convert all uppercase--> lowercase
// only alphanumeric characters
# include <iostream>
#include <string>
#include <algorithm>
using namespace std;
bool isPalindrome( string str){
    int st=0, end= str.length()-1;
    while(st<end){
        if(!isalnum(str[st])){
            st++; continue;
        }
        if(!isalnum(str[end])){
            end--; continue;
        }
        if(islower(str[st]!= islower(str[end]))){
            return false;
        }
        st++;
        end--;
    }
    return true;
}
int main(){
    string s= "Ac3?e3c&a";
    cout<<"Is the string Palindrome: "<<isPalindrome(s)<<endl;
    return 0;
}