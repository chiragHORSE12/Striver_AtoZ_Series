#include<iostream>
using namespace std;
bool CheckSorted(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]<arr[j]){
                continue;
            }
            else{
                return false;
            }
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