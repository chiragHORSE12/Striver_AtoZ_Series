#include<iostream>
#include<vector>
using namespace std;

int Single(vector<int> &arr){
    int xoor=0;
    //Start The Loop From 0 to Size of arr 
    for(int i=0;i<arr.size();i++){
        //Apply Xor Operation
        xoor=xoor^arr[i];
    }
    return xoor;
}

int main(){
    vector <int> arr={1,1,2,2,3,3,5,6,6,7,7};
    cout<<"Single Element present in arr is : "<<Single(arr);
}