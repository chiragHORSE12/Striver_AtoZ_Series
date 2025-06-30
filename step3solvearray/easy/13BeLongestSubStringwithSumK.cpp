#include<iostream>
#include<vector>
using namespace std;

int lon(vector <int>& arr,int k){
    int maxi=0;
      for(int i=0;i<arr.size();i++){

        int sum=0;
        
        for(int j=i;j<arr.size();j++){
            sum += arr[j];

            if(sum == k)
                maxi=max(maxi,j-i+1);
        }
    }
    return maxi;
}

int main(){
    vector<int>arr={1,2,3,1,1,1,2,3};
    int k=3;
    cout<<"Longest Sub String of Sum "<<k<<" is :"<<lon(arr,k);
    return 0;
}

