#include<iostream>
using namespace std;

int secondlar(int arr[],int n){
    if(n==1||n==0){
        return -1;
    }
    int lar=arr[0];
    int seclar=INT32_MIN;
    for(int i=1;i<n;i++){
        if(lar > arr[i]){
            if(seclar < arr[i]){
                seclar=arr[i];
            }
        }
        else if(lar < arr[i] && arr[i] != lar){
            lar=arr[i];
        }
    }
    return seclar;
}

int secondsmal(int arr[],int n){
    if(n == 1 || n== 0){
        return -1;
    }
    int smal=arr[0];
    int secsmal=INT32_MAX;
    for(int i=1;i<n;i++){
        if(arr[i] > smal){
            if(arr[i] < secsmal){
                secsmal=arr[i];
            }
        }
        else if(arr[i] < smal && arr[i] != smal){
            smal=arr[i];
        }
    }
    return secsmal;
}

int main(){
    int arr[]={1,3,5,9,7,2};
    int n=6;
    cout<<"second largest number is :"<<secondlar(arr,n)<<endl;
    cout<<"second smallest number is :"<<secondsmal(arr,n)<<endl;
}