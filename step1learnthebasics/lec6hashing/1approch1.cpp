#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //pre compute
    int hash[15]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]] +=1;
    }
    cout<<"itteration value of 3 is :";
    cout<<hash[3];

}
