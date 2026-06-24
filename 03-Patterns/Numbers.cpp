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

//