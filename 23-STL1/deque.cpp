// DEQUE --> doubly ended queue
// Same as lists --> both front and back operations are possible and random access is also possible.
#include <iostream>
#include <deque>
 using namespace std;
 int main(){
    deque <int> q;
    q.push_back(4);
    q.emplace_back(3);
    q.push_front(2);
    q.emplace_front(1);  // in_place addituion of element
    for( int val: q){
        cout<< val<< " ";
    }
    cout<<endl;
    return 0;
 }
    

 //pop_back(), pop_front()
#include <iostream>
#include <deque>
 using namespace std;
 int main(){
    deque <int> q={1, 2, 3, 4, 5};
    q.pop_back();
    q.pop_front();
    for( int val: q){
        cout<< val<< " ";
    }
    cout<<endl;
    return 0;
}

// Random access is possible
#include <iostream>
#include <deque>
 using namespace std;
 int main(){
    deque <int> q={1, 2, 3, 4, 5};
    
    cout << q[2] <<endl;
    return 0;
}
