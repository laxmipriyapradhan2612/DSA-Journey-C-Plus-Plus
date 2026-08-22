//PRIORITY QUEUE --> largest value is prioritize as the top value
// for values in descending order
#include <iostream>
#include <queue>
 using namespace std;
 int main(){
    priority_queue<int> q;
    q.push(5);
    q.push(3);
    q.push(4);
    q.push(10);
    while(!q.empty()){
        cout<< q.top() << " ";
        q.pop();
    }
    cout<<endl;
    return 0;
}

// for values in ascending order
#include <iostream>
#include <vector>
#include <queue>
 using namespace std;
 int main(){
    priority_queue<int, vector< int>, greater< int>> q;
    q.push(5);
    q.push(3);
    q.push(4);
    q.push(10);
    while(!q.empty()){
        cout<< q.top() << " ";
        q.pop();
    }
    cout<<endl;
    return 0;
}