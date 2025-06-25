#include<iostream>
#include<algorithm>
using namespace std;

int gcd(int v1,int v2){
    int g=min(v1,v2);
    
    for(int i=g;i>0;i--){
        //cout<<i<<endl;
        if((v1 % i == 0) &&(v2 % i == 0)){
            return i;
        }
    }
}

int main(){
    int n1;
    int n2;
    cin>>n1;
    cin>>n2;
    int ans=gcd(n1,n2);
    cout<<ans<<endl;
    return 0;
}