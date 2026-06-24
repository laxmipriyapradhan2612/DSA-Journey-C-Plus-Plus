//SIMPLE SQUARE A B C D, A B C D, ...
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    for(int i=0; i<n; i++){
        char ch='A';
        for(int j=0; j<n; j++){
            cout<<ch<<" ";
            ch+=1;
        }
        cout<<endl;
    }
    return 0;
}

//INCREASING CHAR PATTERN ON EACH ROW A B C, D E F, G H I
#include <iostream>
using namespace std;
int main(){
    int n;
    char ch='A';
    cout<<"Enter the number of rows: ";
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<ch<<" ";
            ch+=1;
        }
        cout<<endl;
    }
    return 0;
}

//TRIANGLE PATTERN  A, A B, A B C, ...
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    for(int i=0; i<n; i++){
        char ch='A';
        for(int j=0; j<i+1; j++){
            cout<<ch<<" ";
            ch+=1;
        }
        cout<<endl;
    }
    return 0;
}

// TRIANGLE PATTERN A, B B, C C C, ...
#include <iostream>
using namespace std;
int main(){
    int n;
    char ch='A';
    cout<<"Enter the number of rows: ";
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<ch<<" ";
        }
        ch++;
        cout<<endl;
    }
    return 0;
}