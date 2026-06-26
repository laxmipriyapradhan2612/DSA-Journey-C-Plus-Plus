// VECTOR SYNTAX
//1.METHOD 1
#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int>vec;  //size--> 0
    cout<<"Size= "<<vec.size()<<endl;
    return 0;
}

//2. METHOD 2
#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<char> vec= {'a','b', 'c', 'd'};
    cout<<"Size= "<<vec.size()<<endl;
    for(char val: vec){  //For each loop in vector
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}

//3. METHOD 3
#include <iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec(3,0);
    for(int val: vec){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}