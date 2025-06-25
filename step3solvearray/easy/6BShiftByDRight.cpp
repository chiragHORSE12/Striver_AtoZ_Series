#include<iostream>
using namespace std;

void ShiftRight(int arr[],int n,int k){
    //No Shift
    if(k == 0){
        return;
    }
    //Shift Value Greater Than Array Size
    if(k > n){
        return;
    }

    //Declare Temp Array 
    int temp[k];

    //Copy Element into Temp Array
    for(int i=n-k;i<n;i++){
        temp[i-n+k]=arr[i];

    }
     
    //Move element Forward by K places
    for(int i=n-k-1;i>=0;i--){
        arr[i+k]=arr[i];
    }
    //Adding Temp array Element back into arr array
    for (int i=0;i<k;i++){
        arr[i]=temp[i];
        
    }
   
    return;
}

int main(){
    int arr[]={1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k;
    cout<<"Enter The value of K : ";
    cin>>k;

    ShiftRight(arr,n,k);
    //Printing Array 
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}