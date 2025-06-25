#include<iostream>
#include<vector>
using namespace std;

void ShiftOnePlace(vector <int> &arr){
    vector<int> ans(arr.size());

    for(int i=0;i<arr.size();i++){
        ans[(i+1) % arr.size()]=arr[i];
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return;
}

int main(){
    vector<int> arr = {1,3,5,7,9,11,13,15,17};
    ShiftOnePlace(arr);

    // for(int i=0;i<ans.size();i++){
    //     cout<<ans[i]<<" ";
    // }

    return 0;
    
}