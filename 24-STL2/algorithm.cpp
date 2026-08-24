//1.SORTING
//Ascending order
#include <iostream>
#include <vector>
#include<algorithm>

 using namespace std;
 int main(){
    int arr[]= {1, 8, 3, 6, 5, 7, 9};
    sort(arr, arr+7);

    vector<int> vec={10, 50,30,15,20};
    sort(vec.begin(), vec.end());
    for(int val: arr){
        cout<< val << " ";
    }
    cout << endl;
    for(int val: vec){
        cout<< val << " ";
    }
    cout << endl;
    return 0;
}
 //descending order
 #include <iostream>
#include <vector>
#include<algorithm>

 using namespace std;
 int main(){
    int arr[]= {1, 8, 3, 6, 5, 7, 9};
    sort(arr, arr+7, greater <int> ());

    vector<int> vec={10, 50,30,15,20};
    sort(vec.begin(), vec.end(), greater <int> ());
    for(int val: arr){
        cout<< val << " ";
    }
    cout << endl;
    for(int val: vec){
        cout<< val << " ";
    }
    cout << endl;
    return 0;
}

//pairs of vectors--> sorting based on the 1st element
#include <iostream>
#include <vector>
#include<algorithm>

 using namespace std;
 int main(){
    vector< pair <int, int>> vec={{3,1}, {2,2}, {1,3},{7,1},{1,5}};
    sort(vec.begin(), vec.end());
    for(auto val: vec){
        cout<< val.first <<" "<< val.second<< endl;
    }
    return 0;
}

//pairs of vectors -->sorting in descending order
//  using comparator
#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
bool comparator(pair<int, int> p1, pair<int, int> p2){
    if(p1.second<p2.second) return true;
    if(p1.second> p2.second) return false;
    if(p1.first< p2.first) return true;
    else return false;
}
 int main(){
    vector< pair <int, int>> vec={{3,1}, {2,2}, {1,3},{7,1},{1,5}};
    sort(vec.begin(), vec.end(), comparator);
    for(auto val: vec){
        cout<< val.first <<" "<< val.second<< endl;
    }
    return 0;
}


//2. reverse
#include <iostream>
#include <vector>
#include<algorithm>

 using namespace std;
 int main(){
    vector< int> vec={1, 2, 3, 4, 5, 6, 7, 8, 9};
    reverse(vec.begin(), vec.end());
    
    for(auto val: vec){
        cout<< val<< endl;
    }

    reverse(vec.begin()+2, vec.begin()+6);
    for(auto val: vec){
        cout<< val<< endl;
    }
    return 0;
}

//3. next permutation
#include <iostream>
#include <vector>
#include<algorithm>

 using namespace std;
 int main(){
    string s= "acd";
    next_permutation(s.begin(), s.end());
    cout<< "String: "<< s<< endl;
    return 0;
}
