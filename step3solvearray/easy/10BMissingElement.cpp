#include<iostream>
using namespace std;

// using Naive Approch

int Missing(int arr[],int n){
    for(int i=0;i<n;i++){
        if(arr[i] != i+1){
            return i+1;
        }
    }
    return -1;
}

int main(){
    int arr[]={1,2,3,4,5,6,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);

    int miss=Missing(arr,n);
    cout<<"Missing Element is : "<<miss<<endl;
    return 0;

}