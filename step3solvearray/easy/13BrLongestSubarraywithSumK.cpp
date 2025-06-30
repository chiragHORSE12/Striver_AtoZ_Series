#include<iostream>
#include<vector>
using namespace std;

int longestSubarray(vector<int> &arr,int k){
        int maxi=0;

        for(int i=0;i<arr.size();i++){
            for(int j=i;j<arr.size();j++){
                int sum=0;
                for(int k=i;k<=j;k++){
                    sum += arr[k];
                }
                if(sum == k ){
                    maxi=max(maxi,j-i+1);
                }
            }
        }
    return maxi;
}
int main(){
    vector<int> arr={1,2,3,1,1,1,2,3};
    int k=3;
    cout<<longestSubarray(arr,k);
}