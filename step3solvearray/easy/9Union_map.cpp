#include<iostream>
#include<map>
#include<vector>
using namespace std;

void unionvec(vector<int> &arr,vector<int> &brr){
    map<int,int> m;
    vector<int> ans;

    for(int i=0;i<arr.size();i++){
        m[arr[i]]++;
    }
    for(int i=0;i<brr.size();i++){
        m[brr[i]]++;
    }

    for(auto & it : m){
        ans.push_back(it.first);
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

    return;
}


int main(){
    vector<int> arr{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> brr{2, 3, 4, 4, 5, 11, 12};
    unionvec(arr,brr);

}