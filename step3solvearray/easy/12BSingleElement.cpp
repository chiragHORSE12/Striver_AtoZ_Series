#include<iostream>
#include<vector>
#include<map>
using namespace std;

int Single(vector<int> &arr){

    int n=arr.size();

    map <int,int> mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }

    for(auto it:mp){
        if(it.second == 1){
            return it.first;
        }
    }
return -1;

}

int main(){
    vector<int> arr={1,1,2,2,3,3,5,6,6,7,7};
    cout<<"Single Element is : "<<Single(arr)<<endl;
}