//BRUTE APPROACH
#include <iostream>
#include <vector>
using namespace std;
int maxArea(vector<int>height){
    int maxWater=0; //ans
    for(int i=0; i<height.size(); i++){
        for(int j=i+1; j<height.size(); j++){
            int w= j-i;
            int ht= min(height[j], height[i]);
            int area= w*ht;
            maxWater=max(area, maxWater);
        }
    }
    return maxWater;
}
int main(){
    vector<int> vec={1,8,6,2,5,4,8,3,7};
    cout<<"Container with most water= "<<maxArea(vec)<<endl;
    return 0;
}


//TWO POINTER APPROACH (OPTIMAL APPROACH)
#include <iostream>
#include <vector>
using namespace std;
int maxArea(vector<int>height){
    int maxWater=0; //ans
    int n= height.size();
    int lp=0, rp=n-1;
    while(lp<rp){
        int w= rp-lp;
        int ht= min(height[lp], height[rp]);
        int area=w*ht;
        maxWater= max(area, maxWater);
        if(height[lp]<height[rp]){
            lp++;
        }else{
            rp--;
        }
    }
    return maxWater;
}
int main(){
    vector<int> vec={1,8,6,2,5,4,8,3,7};
    cout<<"Container with most water= "<<maxArea(vec)<<endl;
    return 0;
}

