#include<iostream>
using namespace std;
bool CheckSorted(int arr[],int n){
    for(int i=1;i<n-1;i++){
        if(arr[i-1]<arr[i]){
            continue;
        }
        else{
            return false;
        }
    }
    return true;
}

int main(){
    int arr[]={1,2,3,5,6,7,8};
    int n=7;
    cout<<"THe Given Array Is Sorted : "<<CheckSorted(arr,n)<<endl;
    return 0;
}