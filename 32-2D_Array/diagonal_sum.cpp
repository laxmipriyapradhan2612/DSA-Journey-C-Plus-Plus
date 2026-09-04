#include <iostream>
using namespace std;
// Time complexity--> O(n*n)
int diagonalSum(int mat[][4], int n){
    int sum=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            //primary Diagonal
            if(i==j){
                sum+= mat[i][j];
            }else if(j== n-i-1){  // secondary diagonal
                sum+= mat[i][j];
            }
            }
        }
        return sum;
    }


    //optimised time complexity--> O(n)
    int optdiagonalSum(int mat[][4], int n){
    int sum=0;

    //primary diagonal--> j=i
    // secondary diagonal--> j=n-i-1
    for(int i=0; i<n; i++){
        sum+= mat[i][i];
        if(i!= n-i-1){
            sum+= mat[i][n-i-1];
        }
    }
    return sum;
}


int main(){
    int matrix[4][4]= {{1, 2, 3, 4},{5, 6, 7, 8},{9, 10, 11, 12}, {13, 14, 15, 16}};
    int n=4;
    cout<<"The sum of Diagonal elements= "<< diagonalSum(matrix, n) <<endl;
    cout<<"The sum of Diagonal elements using optimised method = "<< optdiagonalSum(matrix, n) <<endl;
    return 0;
}
