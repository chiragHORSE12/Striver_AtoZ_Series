#include<iostream>
using namespace std;

void ShiftLeft(int arr[],int n,int k){
    //No shift Require
    if(k == 0){
        return;
    }
    k=k%n;
    //Inavlid Shift
    if(k > n){
        return;
    }

    //Declare Temprary array 
    int temp[k];

    //Store K Element Into Temp Array
    for(int i=0;i<k;i++){
        temp[i]=arr[i];
    }

    //shift the Value By K place
    for(int i=0;i<n-k;i++){
        arr[i]=arr[i+k];
    }

    for(int i=n-k;i<n;i++){
        arr[i]=temp[i-n+k];
    }
return;

}

int main(){
    int k;
    cout<<"Enter The Value Of K : ";
    cin>>k;

    int arr[]={1,2,3,4,5,6};
    int n=6;
    ShiftLeft(arr,n,k);
    //Print the shifted array
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}