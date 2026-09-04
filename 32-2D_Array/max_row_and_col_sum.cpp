#include <iostream>
#include <climits>
using namespace std;
// MAXIMUM SUM OF ROW
int getMaxRowSum(int mat[][3], int rows, int cols){
    int maxSum= INT_MIN;
    for(int i=0; i<rows; i++){
        int rowSum=0;
        for(int j=0; j<cols; j++){
            rowSum+= mat[i][j];
        }
        maxSum= max(maxSum, rowSum);
    }
    return maxSum;
}


//MAXIMUM SUM OF THE COLUMN
int getMaxColSum(int mat[][3], int rows, int cols){
    int maxSum= INT_MIN;
    for(int i=0; i<cols; i++){
        int colSum=0;
        for(int j=0; j<rows; j++){
            colSum+= mat[j][i];
        }
        maxSum= max(maxSum, colSum);
    }
    return maxSum;
}


int main(){
    int matrix[4][3]= {{1, 2, 3}, {4, 5, 6}, {7,8, 9},{10, 11, 12}};
    int rows=4;
    int cols=3;
    cout<<"Max row sum= "<<getMaxRowSum(matrix, rows, cols)<< endl;
    cout<<"Max column sum= "<<getMaxColSum(matrix, rows, cols)<<endl;
    return 0;
}



