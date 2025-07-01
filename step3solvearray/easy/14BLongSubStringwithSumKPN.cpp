#include<iostream>
#include<vector>
using namespace std;

int longestSubarray(vector<int> &arr,int k){
        int maxi=0;
        //starting of Sub String 
        for(int i=0;i<arr.size();i++){
            //ending of Sub String
            for(int j=i;j<arr.size();j++){
                int sum=0;
                //Calculate sum 
                for(int k=i;k<=j;k++){
                    sum += arr[k];
                }

                //checking Sum is K then update Length
                if(sum == k ){
                    maxi=max(maxi,j-i+1);
                }
            }
        }
    return maxi;
}
int main(){
    vector<int> arr={-1,1,1};
    int k=1;
    cout<<"Longest Sub String with sum "<<k<< " is : " <<longestSubarray(arr,k);
    return 0;
}