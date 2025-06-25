#include<iostream>
#include<algorithm>
using namespace std;

void gcd(int a,int b){
    int gccd=1;
    for(int i=2;i<= min(a,b);i++){
        if((a % i == 0)&&(b % i ==0)){
            gccd=i;
        }
    }
    cout<<gccd<<endl;
}

int main(){
    int n1=12;
    int n2=6;

    gcd(n1,n2);
    return 0;
}