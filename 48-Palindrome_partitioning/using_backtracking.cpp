#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
bool isPalin(string s){
        string s2= s;
        reverse(s2.begin(), s2.end());
        if(s2== s){
            return true;
        }else{
            return false;
        }
    }
    void getAllParts(string s,vector<string> &partitions, vector<vector<string>> &ans ){
        if(s.size()== 0){
            ans.push_back(partitions);
            return;
        }
        
        for(int i=0; i< s.size(); i++){
            string part= s.substr(0, i+1);

            if(isPalin(part)){
                partitions.push_back(part);
                getAllParts(s.substr(i+1), partitions, ans);
                // backtracking
                partitions.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> partitions;
         getAllParts(s, partitions, ans);
         return ans;
    }
    int main(){
        string s= "aab";
        vector<vector<string>> result= partition(s);
        for(auto val: result){
            cout<<"[";
            for(auto x: val){
                cout<< x<< " ";
            }
            cout<< "]" << endl;
        }
        return 0;
    }