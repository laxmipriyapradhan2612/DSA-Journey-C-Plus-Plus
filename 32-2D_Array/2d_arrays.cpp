#include <iostream>
using namespace std;
int main(){
    int matrix[4][3]= {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    int rows= 4;
    int cols= 3;
    cout<< matrix[2][1] << endl; // 8
    return 0;
}


// Loops on 2-D arrays
#include <iostream>
using namespace std;
int main(){
    int matrix[4][3]= {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    int rows= 4;
    int cols= 3;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cout<< matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}


// loops for both user input and output of array elements
#include <iostream>
using namespace std;
int main(){
    int matrix[4][3];
    int rows= 4;
    int cols= 3;
    cout<< "Enter the elements: "<< endl;
    // Input
    for(int i=0; i<rows; i++){
        for(int j=0; j< cols; j++){
            cin>> matrix[i][j];
        }
    }

    // output 
    for(int i=0; i<rows; i++){
        for(int j=0; j< cols; j++){
            cout<< matrix[i][j]<< " ";
        }
        cout << endl;
    }
    return 0;
}

