// SQUARE PATTERN WITH INITIAL VALUE AS 1 ON EACH ROW
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    for(int i=0; i<n; i++){
        int num=1;         // Initializes each row with 1
        for(int j=0; j<n; j++){
            cout<<num<< " ";
            num++;
        }
        cout <<endl;
    }
    return 0;
}

//SQUARE PATTERN WITH INCREASING NO.
#include <iostream>
using namespace std;
int main(){
    int n;
    int num=1;
    cout<<"Enter the number of rows: ";
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<num<< " ";
            num++;
        }
        cout<<endl;
    }
    return 0;
}

//TRIANGLE PATTERN WITH SAME NUMBER ON EACH ROW AND INC. 
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout<<(i+1)<<" ";
        }
        cout<<endl;
    }
    return 0;
}

//TRIANGLE PATTERN WITH NUMBERS 1, 1 2, 1 2 3,... ON EACH ROW
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=1; j<=i+1; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}

//TRIANGLE WITH REVERSE NUMBER PATTERN 1, 2 1, 3 2 1, ...
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=i+1; j>0; j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}

//FLOYD TRIANGLE 1, 2 3, 4 5 6, 7 8 9 10, ...
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    int num=1;
    for(int i=0; i<n; i++){
        for(int j=i+1; j>0; j--){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
    return 0;
}

//INVERTED TRIANGLE PATTERN 1 1 1 1, 2 2 2, 3 3, 4
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            cout<<" ";
        }
        for(int j=0; j<n-i; j++){
            cout<<(i+1);
        }
        cout<<endl;
    }
    return 0;
}

//HILL PATTERN
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            cout<<j<<" ";
        }
        for(int j=1; j<i+1; j++){
            cout<<j;
        }
        for(int j=i; j>0; j--){
            cout<<j;   
        }
        cout<<endl;
    }
    return 0;
}