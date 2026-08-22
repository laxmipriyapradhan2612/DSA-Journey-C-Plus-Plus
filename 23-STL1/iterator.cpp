// CREATION OF ITERATOR
// forward iterator
#include <iostream>
#include <vector>
 using namespace std;
 int main(){
    vector <int> vec= {1, 2, 3, 4, 5};
    vector<int> :: iterator it;
    for(it= vec.begin(); it!= vec.end(); it++){
        cout<< *(it)<< " ";
    }
    cout<< endl;
    return 0;
 }

 // reverse iterator
#include <iostream>
#include <vector>
 using namespace std;
 int main(){
    vector <int> vec= {1, 2, 3, 4, 5};
    vector<int> :: reverse_iterator it;
    for(it= vec.rbegin(); it!= vec.rend(); it++){
        cout<< *(it)<< " ";
    }
    cout<< endl;
    return 0;
 }

 //Easy way of declaration
 #include <iostream>
#include <vector>
 using namespace std;
 int main(){
    vector <int> vec= {1, 2, 3, 4, 5};
    for( auto it= vec.begin(); it!= vec.end(); it++){
        cout<< *(it)<< " ";
    }
    cout<< endl;
    return 0;
 }

