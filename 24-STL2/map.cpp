 //MAP --> Self Balancing Tree internally
 // It is a pair of key and value(key, value)--> Key is always unique
 // map always prints outputs in a sorted ascending order of the keys
 //If there are multiple occurrence of a single key--> it gets printed only once 
// #include <iostream>
 #include <map>
  using namespace std;
  int main(){
     map< string, int> m;
     m["tv"]=100;
     m["fridge"]=10;
    m["camera"]=80;
     m["tablet"]=150;
     m.emplace("watch", 200);        // in-place insertion of elements
     m.insert({"headphone", 150});
     for( auto val: m){              // map--> pair 
         cout<< val.first << " "<< val.second<< endl;
     }

     return 0;
 }


/*                           OTHER MAPS
     --------------------------------------------------------------
     |                                                            |
 Multimap                                                     Unordered map
 []--> can't be used only inser and emplace functions                                              
 we can assign multiple values                           it stores data in random order
 to a single key and it gets printed 
 for each occurrence
 */
//MULTIMAP
#include <iostream>
#include <map>
 using namespace std;
 int main(){
    multimap< string, int> m;
    m.emplace("tv",100);
    m.emplace("tv",80);
    m.emplace("tv",100);
    m.emplace("tv",150);
    for( auto val: m){              // map--> pair 
        cout<< val.first << " "<< val.second<< endl;
    }

    return 0;
}

//UNORDERED MAP
#include <iostream>
#include <unordered_map>
 using namespace std;
 int main(){
    unordered_map< string, int> m;
    m.emplace("tv",100);
    m.emplace("phone",80);
    m.emplace("tab",100);
    m.emplace("camera",150);
    for( auto val: m){              // map--> pair 
        cout<< val.first << " "<< val.second<< endl;
    }

    return 0;
}