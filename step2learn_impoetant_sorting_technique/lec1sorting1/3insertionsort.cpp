#include<iostream>
using namespace std;

void insertion(int arr[],int n){
    for(int i=0;i<=n-1;i++){
        int j=i;
        while(j > 0 && arr[j] <arr[j-1]){
            int temp=arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=temp;
            j--;
        }
    
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return ;
}

int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    insertion(arr,n);
}