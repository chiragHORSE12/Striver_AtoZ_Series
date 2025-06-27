#include<iostream>

using namespace std;

//Using HashMap 

int Missing(int arr[],int n){
    
    //Crerate hash map 
    int Hash[n+1]={0};

    //Filling the Frequency of value from 1 to N
    for(int i=0;i<n-1;i++){
        Hash[arr[i]]++;
    }

    //Checking for Frequency == 0
    for(int i=1;i<n;i++){
        if(Hash[i]==0){
            return i;
        }
    }

    

}

int main(){
    int arr[]={1,2,3,4,6,7,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    int Miss=Missing(arr,n);
    
    cout<<"Missing Element in the array is : "<<Miss<<endl;
    return 0;
}