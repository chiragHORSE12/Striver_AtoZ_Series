#include<iostream>
#include<algorithm>
using namespace std;

int gcd(int v1,int v2){
    while((v1 > 0) &&(v2 > 0)){
        
        if(v1 > v2){
            //gcd(v1,v2)->gcd(v1-v2,v2)
            v1=v1-v2;
        }
        else{
            //v2 > v1 gcd(v1,v2)->gcd(v2-v1,v1)
            v2=v2-v1;
        }
    }
    if(v1 == 0){
        return v2;
    }
    else{
        return v1;
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