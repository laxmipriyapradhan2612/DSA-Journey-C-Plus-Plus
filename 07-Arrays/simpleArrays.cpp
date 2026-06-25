//TO GET INPUT OF ARRAY VALUES AND TRAVERSING THEM
#include <iostream>
using namespace std;
int main(){
    int size=5;
    int arr[size];
    cout<<"Enter the array elements: ";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    for(int i=0; i<size; i++){
        cout<< arr[i]<< endl;
    }
    return 0;
}
//FINDING THE SMALLEST VALUE AND THE INDEX WHERE IT IS INSIDE THE ARRAY
/*#include <iostream>
#include <climits>
using namespace std;
int main(){
    int arr[5]={2,8,15,1,3};
    int size= 5;
    int pos;
    int smallest= INT_MAX;
    for(int i=0; i<size; i++){
        if(arr[i]<smallest){
            smallest= arr[i];
            pos=i;
        }
    }
    cout<<"Smallest element= "<<smallest<< endl;
    cout<<"Index value= "<<pos<<endl;
    return 0;
}*/


//FINDING THE LARGEST VALUE AND THE INDEX WHERE IT IS INSIDE THE ARRAY
/*#include <iostream>
#include <climits>
using namespace std;
int main(){
    int arr[5]={2,8,15,1,3};
    int size= 5;
    int pos;
    int largest= INT_MIN;
    for(int i=0; i<size; i++){
        if(arr[i]> largest){
            largest= arr[i];
            pos=i;
        }
    }
    cout<<"Largest element= "<<largest<< endl;
    cout<<"Index value= "<<pos<<endl;
    return 0;
}*/

//ARRAYS ACT AS POINTERS AND THE VALUES CHANGED IN FUNCTIONS REFLECT INSIDE THE MAIN()
//FINDING THE SMALLEST VALUE AND THE INDEX WHERE IT IS INSIDE THE ARRAY
#include <iostream>
using namespace std;
void changeArr(int arr[], int sz){
    cout<<"inside the function: \n";
    for(int i=0; i< sz; i++){
        arr[i]=2*arr[i];
        cout<< arr[i]<<" ";
    }
    cout<<endl;
  
}
int main(){
    int arr[]={1,2,3,4,5};
    int size=5;
    changeArr(arr, size);
    cout<<"inside main\n";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}