#include<iostream>
#include<map>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n :";
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    map<int,int> mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }

    cout<<"Printing the frequency of each value "<<endl;
    for(auto it:mp){
        cout<<it.first<<"->"<<it.second<<endl;
    }
}