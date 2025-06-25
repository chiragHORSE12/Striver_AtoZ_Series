#include<iostream>
#include<vector>
using namespace std;
void unio(vector<int> &arr,vector<int> &brr){
    int a=0;
    int b=0;
    vector<int> ans;
    while(a < arr.size() && b < brr.size()){
        if(arr[a] < brr[b]){
            ans.push_back(arr[a]);
            a++;
        }
        else if(brr[b] < arr[a]){
            ans.push_back(brr[b]);
            b++;
        }
        else{
            ans.push_back(arr[a]);
            a++;
            b++;
        }
    }
    while(a < arr.size()){
        ans.push_back(arr[a]);
        a++;
    }
    while(b < brr.size()){
        ans.push_back(brr[b]);
        b++;
    }

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return;
}

int main(){
    vector<int> arr{1,2,3,4,5};
    vector<int> brr{2,3,4,6,7};
    unio(arr,brr);
return 0;
}