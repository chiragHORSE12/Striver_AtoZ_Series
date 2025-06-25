#include<iostream>
#include<set>
using namespace std;

int RemoveDup(int arr[],int n){
    set <int> st;
    //traverse the array and put unique element into set
    for(int i=0;i<n;i++){
        st.insert(arr[i]);
    }

    //uniquee element ketane h 
    int siz_st=st.size();

    //assign the uniwue value to the arr
    int index=0;
    for(auto nw : st){
        arr[index]=nw;
        index++;
    }

    //return siz_st;
    return index;
}

int main(){
    int arr[]={1,1,2,2,2,3,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Number of uniquee element is : "<<RemoveDup(arr,n)<<endl;

}