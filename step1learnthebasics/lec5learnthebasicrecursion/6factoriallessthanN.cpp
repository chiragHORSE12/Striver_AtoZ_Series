#include<iostream>
#include<vector>
#include<math.h>
using namespace std;



int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;

    vector<long long> vec;
    
    long long fact=1;
    for(long long  i=1;i<=n;i++){
        fact=fact*i;
        vec.push_back(fact);
        // to handle out of bound 
        //check factorial < n
        if(vec[i-1] > n){
            vec.pop_back();
            break;
        }
    }
    for(auto f:vec){
        cout<<f<<" ";
    }
    return 0;

}