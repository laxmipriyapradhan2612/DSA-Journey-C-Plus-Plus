//push_back(), pop_back()
#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    for(int val: vec){
        cout<< val << " ";
    }
    cout << endl;
    vec.pop_back();
    cout<< "Vector after pop_back function."<< endl;
    for(int val: vec){
        cout<< val<< " ";
    }
    cout << endl;
    return 0;
}

// erase()--> Erases an element or a range of element
#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> vec= {1, 2, 3, 4, 5, 6, 7, 8, 9};
    vec.erase(vec.begin());  //1
    vec.erase(vec.end()-1);  //9
    // for deleting a range of element
    vec.erase(vec.begin()+2, vec.begin()+4); //3,4
    for(int val: vec){
        cout<< val<< " ";
    }
    cout <<endl;
    return 0;
}*/

//insert()
/*#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> vec= {1, 2, 3, 4, 5};
    vec.insert(vec.begin(), 0);
    vec.insert(vec. end(), 6);
    vec.insert(vec.begin()+2, 8);
    for(int val: vec){
        cout<< val<< " ";
    }
    cout <<endl;
    return 0;
}

// clear()--> deletes all the elements
#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> vec= {1, 2, 3, 4, 5, 6, 7, 8, 9};
    for(int val: vec){
        cout<< val<< " ";
    }
    cout <<endl;
    vec.clear();
    cout<< "Vector after clear function."<< endl;
    for(int val: vec){
        cout<< val<< " ";
    }
    cout<< endl;
    return 0;
}

// empty()--> used to check whether a vector is empty or not
#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> vec= {1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout<<" is vector empty or not: "<< vec.empty()<< endl;  // not empty--> 0
    vector <int> vec2= {1, 2, 3};
    vec2.clear();
    cout<<" is vector empty or not: "<< vec2.empty()<< endl;  // empty yes--> 1
    return 0;
}