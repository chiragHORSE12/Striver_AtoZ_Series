#include<iostream>
#include<vector>
using namespace std;
vector<int> RemoveDuplicate(vector<int> &arr){
    vector<int> ans;
    for(int i=0;i<arr.size();i++){
        if(i<arr.size()-1 && arr[i] == arr[i+1]){
            continue;
        }
        else{
            ans.push_back(arr[i]);
        }
    }
    return ans;
}


int main(){
    vector<int> arr{1,1,2,2,2,2,3,3,4,4,5,5,6,7};
    vector<int> ans=RemoveDuplicate(arr);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
    `
}