// LIST --> ( doubly linked list)--> front & back both operations are possible
// push_back(), emplace_back(), push_front(), emplace_front()
#include <iostream>
#include <list>
 using namespace std;
 int main(){
    list <int> l;
    l.push_back(4);
    l.emplace_back(3);
    l.push_front(2);
    l.emplace_front(1);  // in_place addituion of element
    for( int val: l){
        cout<< val<< " ";
    }
    cout<<endl;
    return 0;
 }
    

 //pop_back(), pop_front()
#include <iostream>
#include <list>
 using namespace std;
 int main(){
    list <int> l={1, 2, 3, 4, 5};
    l.pop_back();
    l.pop_front();
    for( int val: l){
        cout<< val<< " ";
    }
    cout<<endl;
    return 0;
}

// RANDOM ACCESS IN LIST IS NOT POSSIBLE
//l[2], l[3]--> values like this can't be accessed.