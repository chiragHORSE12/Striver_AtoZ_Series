#include<iostream>
using namespace std;
void reverse(int arr[],int start,int end){

    while(start <= end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
    return;
}

void ShiftRight(int arr[],int n,int k){
    //Reverse last K Element
    reverse(arr,n-k,n-1);

    //Reverse First n-k-1 Element
    reverse(arr,0,n-k-1);

    //Reverse whole Array 
    reverse(arr,0,n-1);
}

int main(){
    int arr[]={1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=2;

    ShiftRight(arr,n,k);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}