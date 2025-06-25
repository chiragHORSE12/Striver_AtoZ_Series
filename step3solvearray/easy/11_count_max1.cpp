#include<iostream>
using namespace std;

int count(int arr[],int size){
    int max_v=0;
    int cnt=0;
    for(int i=0;i<size;i++){
        if(arr[i]==1){
            cnt++;
        }
        else{
            cnt=0;
        }
        max_v=max(cnt,max_v);
    }
    return max_v;
}

int main(){
    int arr[]={1,1,0,1,1,1};
    int size=6;
    cout<<"Total concecutive 1's in the array is : "<<count(arr,size);
    return 0;
}
