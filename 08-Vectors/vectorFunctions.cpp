//VECTOR FUNCTIONS
//1. size()
#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> vec={1,2,3,4,5,6};
    cout<<"Size of the vector= "<< vec.size()<<endl;  //syntax--> name_of_vector.size()
    return 0;
}

//push_back()
#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int>vec;
    cout<<"Size before push_back= "<<vec.size()<<endl;  //0
    vec.push_back(25);
    vec.push_back(35);
    vec.push_back(45); 
    cout<<"Size after push_back= "<<vec.size()<<endl; //3
    for(int val: vec){
        cout<<val<< " ";  // 25 35 45
    }
    cout<<endl;
    return 0;
}

//pop_back()
#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int>vec;
    cout<<"Size before push_back= "<<vec.size()<<endl;
    vec.push_back(25);
    vec.push_back(35);
    vec.push_back(45);
    cout<<"Size after push_back= "<<vec.size()<<endl;
    for(int val: vec){
        cout<<val<< " ";
    }
    cout<<endl;
    vec.pop_back();    // deletes last element-->45
    for(int val: vec){
        cout<<val<< " ";     // 25 35
    }
    cout<<endl;

    return 0;
}

//back()
#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int>vec;
    vec.push_back(25);
    vec.push_back(35);
    vec.push_back(45); 
    cout<<"Last element= "<<vec.back()<<endl; // 45
    return 0;
}

//front()
#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int>vec;
    vec.push_back(25);
    vec.push_back(35);
    vec.push_back(45); 
    cout<<"First element= "<<vec.front()<<endl; // 25
    return 0;
}


//at()
#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int>vec;
    cout<<"Size before push_back= "<<vec.size()<<endl;  //0
    vec.push_back(25);
    vec.push_back(35);
    vec.push_back(45); 
    cout<<vec.at(1)<<endl; // 35
    return 0;
}