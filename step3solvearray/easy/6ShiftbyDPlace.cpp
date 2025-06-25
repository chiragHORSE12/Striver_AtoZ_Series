#include<iostream>
#include<vector>
using namespace std;

void ShiftOnePlace(vector <int> &arr,int d){
    vector<int> ans(arr.size());

    for(int i=0;i<arr.size();i++){
        ans[(i+d) % arr.size()]=arr[i];
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return;
}

int main(){
    vector<int> arr = {1,3,5,7,9,11,13,15,17};
    int d;
    cout<<"Enter the value of D to know the shift value : ";
    cin>>d;
    ShiftOnePlace(arr,d);

    // for(int i=0;i<ans.size();i++){
    //     cout<<ans[i]<<" ";
    // }

    return 0;
    
}