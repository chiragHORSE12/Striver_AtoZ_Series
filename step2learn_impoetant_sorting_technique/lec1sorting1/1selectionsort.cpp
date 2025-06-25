#include<iostream>
using namespace std;

int main(){
    int arr[]={13,46,24,52,20,9};
    for(int i=0;i<5;i++){
        int min=i;
        for(int j=i+1;j<6;j++){
            if(arr[j] < arr[min]){
                min=j;
            }
        }
        
        int temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
    }
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
}