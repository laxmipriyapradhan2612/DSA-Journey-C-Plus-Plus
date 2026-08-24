//SET --> Internally uses a self balancing tree
//It only stores unique values and in a sorted order
//Set ignores duplicate values and the size remains same

#include <iostream>
#include <set>
 using namespace std;
 int main(){
    set<int> s;
    s.insert(1);
    s.insert(2); 
    s.insert(3);
    s.insert(1);
    s.insert(2);
    cout<< "Size of the set= "<< s.size()<< endl;  // size--> 3
    cout<< "The elements in set are:"<< endl;     // 1 2 3

    for( auto val: s){              // map--> pair 
        cout<< val<< endl;
    }

    return 0;
}
