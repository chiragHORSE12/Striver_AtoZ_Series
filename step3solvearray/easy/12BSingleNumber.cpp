#include<iostream>
using namespace std;

int SingleValue(int arr[],int n){
    
    for(int i=0;i<n;i++){
        int tar=arr[i];
        int count=0;
        for(int j=0;j<n;j++){
            if(arr[j] == tar){
                count++;
            }
        }
        if(count == 1){
            return tar;
        }
    }
    return -1;
}

int main(){
    int arr[]={1,1,2,2,3,4,4,5,5};
    int n=sizeof(arr)/sizeof(arr[0]);

    int ans=SingleValue(arr,n);
    cout<<"the value which occurs Single is  : "<<ans;
    return 0;
}
