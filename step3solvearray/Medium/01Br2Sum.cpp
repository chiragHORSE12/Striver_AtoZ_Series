#include<iostream>
#include<vector>
using namespace std;

void Sum(vector<int> &arr,int target){

    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr.size();j++){
            if(i == j)
                continue;
        
            if(arr[i]+arr[j] == target ){
                cout<<"pair are : "<<i<<" "<<j<<endl;
            }
        }
    }
    return ;
}

int main(){
    vector<int> arr={2,6,5,8,11};
    int target=14;
    Sum(arr,target);
    return 0;
}