// pair of two same data types

#include <iostream>
 using namespace std;
 int main(){
    pair<int, int> p={ 3,5};
    cout<< p.first<< endl;
    cout<< p.second << endl;
    return 0;
}

// pair of two different data types
#include <iostream>
 using namespace std;
 int main(){
    pair<string, int> p={ "laxmi",7};
    cout<< p.first<< endl;
    cout<< p.second << endl;
    return 0;
}

// pair of paiers
#include <iostream>
 using namespace std;
 int main(){
    pair<int, pair< char, int> > p={ 3, {'a', 10}};
    cout<< p.first<< endl;
    cout<< p.second.first << endl;
    cout<< p.second.second << endl;
    return 0;
}

// vectors of pairs
#include <iostream>
#include <vector>
 using namespace std;
 int main(){
    vector< pair< int, int>> vec= {{1,2}, {3,4}, {4, 5}};
    for(auto val: vec){
        cout<< val.first << " " << val.second<< endl;
    }
    return 0;
}