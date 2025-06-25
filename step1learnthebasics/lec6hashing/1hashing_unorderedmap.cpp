#include<iostream>
#include<map>
using namespace std;

int main(){
    int n;
    cout<<"enter the value of n :";
    cin>>n;

    int arr[n];
    cout<<"enter the value :";
    for(int i=0;i<n;i++){ 
        cin>>arr[i];
        cout<<endl;
    }

    //pre compute]
    map<int,int> mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;

    }

    int q;
    cout<<"to check for value :";
    cin>>q;
    while(q--){
        int number;
        cin>>number;
        
        cout<<"frequency of "<<number<<"is :";
        //fetch
        cout<<mpp[number]<<endl;

    }
    cout<<"printing the map key & value ";
    for(auto it:mpp){
        cout<<it.first<<"->"<<it.second<<endl;
    }
   return 0; 
}