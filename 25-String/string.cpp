// simple string--> printing it
 # include <iostream>
 #include <string>
 using namespace std;
 int main(){
     string s= "laxmi";
     cout<< s << endl;
     return 0;
 }

 //concatenate 2 strings
 # include <iostream>
 #include <string>
 using namespace std;
 int main(){
     string s1= " hello ";
     string s2= "world!";
     cout<<s1+s2 << endl;
     return 0;
 }

//comparison between 2 strings
# include <iostream>
#include <string>
using namespace std;
int main(){
    string s1= "hello";
    string s2= "world!";
    string s3= "hello";
    cout<<(s1 == s2) << endl;
    cout<< (s1< s2)<< endl;
    cout<< (s1!= s3)<< endl;
    cout<< (s1>= s3)<< endl;
    return 0;
}

//getting user input as string --> printing the string
# include <iostream>
#include <string>
using namespace std;
int main(){
    string str;
    cout<<"Enter the string: ";
    getline(cin, str);
    cout<< "String: "<<  str<< endl;
    return 0;
}

// printing each character of the string
# include <iostream>
#include <string>
using namespace std;
int main(){
    string str= "hello my peeps.";
    for(char ch: str){
        cout<< ch<< " ";
    }
    cout<< endl;
    return 0;
}

