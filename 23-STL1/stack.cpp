//STACK --> non sequential str.
//Based on LIFO 
#include <iostream>
#include <stack>
 using namespace std;
 int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    cout <<"Top element in the stack: "<< s.top()<< endl;
    // for printing all the elements in the stack
    while(!s.empty()){
        cout<< s.top()<< endl;
        s.pop();
    }
    return 0;
}

// swap() 
#include <iostream>
#include <stack>
 using namespace std;
 int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    stack <int> s2;
    cout<< "Size of stack 1: "<< s.size()<< endl;
    cout<< "Size of stack 2: "<< s2.size()<< endl;
    s2.swap(s);
    cout<< "Size of stacks after swapping..."<< endl;
    cout<< "Size of stack 1: "<< s.size()<< endl;
    cout<< "Size of stack 2: "<< s2.size()<< endl;
    return 0;
}