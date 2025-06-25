#include<iostream>
using namespace std;

void prnt(int n,int i){
    if(i > n){
        return;
    }
    cout<<"GFG"<<" ";
    prnt(n,i+1);
}

int main(){
    int n;
    cout<<"Enter the value of N :";
    cin>>n;
    prnt(n,1);
}