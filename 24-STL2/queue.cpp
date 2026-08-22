//STACK --> non sequential str.
//Based on LIFO 
#include <iostream>
#include <queue>
 using namespace std;
 int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    cout <<"Top element in the queue: "<< q.front()<< endl;
    // for printing all the elements in the stack
    while(!q.empty()){
        cout<< q.front()<< endl;
        q.pop();
    }
    return 0;
}
