#include<iostream>
using namespace std;

int missingelement(int arr[],int size){
    int sum=0;
    int actual=(size*(size+1))/2;
    for(int i=0;i<size-1;i++){
        sum +=arr[i];
    }
    int ans=actual-sum;
    return ans;
}

int main(){
    int arr[]={1,2,4,5};
    int siz=5;
    cout<<"Missing element is array is : "<<missingelement(arr,siz)<<endl;
    return 0;
}