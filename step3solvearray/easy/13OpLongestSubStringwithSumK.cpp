#include<iostream>
#include<vector>
#include<map>
using namespace std;

int LongSub(vector <int> &arr,int k){
    int n=arr.size();

    map<int,int> mp;
    int sum=0;
    int maxlen=0;

    for(int i=0;i<n;i++){
        //calculate sum
        sum +=arr[i];

        //check if sum =k 
        if(sum == k){
            maxlen=max(maxlen,i+1);
        }
        
        //calculate k-x Reverse Engineering
        int rem=sum-k;

        //calculate length & Update max len
        if(mp.find(rem) != mp.end() ){

            //check length of max length
            int len=i -mp[rem];
            maxlen=max(maxlen,len);
        }
        
        //update the map checking the condition
        if (mp.find(sum) == mp.end()){
            mp[sum] = i; //Every value of i has Sum in map 
            // To Remove Re-Update
        }
    }
    return maxlen;
}

int main(){
    vector <int> arr={1,2,3,1,1,1,2,3};
    int k=3;
    cout<<"Longest Sub String with sum "<<k<< " is : " <<LongSub(arr,k);
    return 0;

}