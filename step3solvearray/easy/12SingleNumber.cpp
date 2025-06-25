#include<iostream>
#include<map>
using namespace std;

int Single(int arr[],int n){
    map<int,int> mp;
    //we use map for map value with iteration
    for(int i=0;i<n;i++){
        //increase the value iteration
        mp[arr[i]]++;
    }
    //check for the value with iteration 1
    for(auto it : mp){
        if(it.second == 1){
            //if found then return value 
            return it.first;
        }
    }
    return -1;
}

int main(){
    int arr[]={1,1,2,2,3,3,4,5,5,6,6};
    int n=sizeof(arr)/sizeof(arr[0]);

    cout<<"The Single Value Present in Array is : "<<Single(arr,n);
}