#include <iostream>
#include <vector>
using namespace std;

int compress(vector<char>& chars) {
    int n= chars.size();
    int idx=0;
    for(int i=0; i<n; i++){
        char ch= chars[i];
        int count=0;
        while(i<n && chars[i]== ch){
            count++; i++;
        }

        if(count==1){
            chars[idx++]= ch;
        }else{
            chars[idx++]= ch;
            string dig= to_string(count);
            for(char val: dig){
                chars[idx++]= val;
            }

        }
        i--;
    }
    chars.resize(idx);
    return idx;
    }
int main(){
    vector<char> vec= {'a','a','b','b','c','c','c'};
    cout<<"After compression:"<< compress(vec)<<endl;
    for(auto val: vec){
        cout<<val;
    }
    cout<<endl;

    return 0;
}