#include<iostream>
using namespace std;

void d(int n,int i){
    //base condition
    if(i > n){
          return;
      }
    cout<<i<<" ";
    d(n,i+1);
}

int main(){
    int n;
    cout<<"Enter the value of N :";
    cin>>n;
    d(n,1);
}