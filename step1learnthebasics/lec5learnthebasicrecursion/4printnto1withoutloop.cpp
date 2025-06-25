#include<iostream>
using namespace std;

void reverse(int n){
    if(n == 0){
        return;
    }
    cout<<n<<" ";
    reverse(n-1);
}

int main(){
    int n;
    cout<<"Enter the value of n :";
    cin>>n;
    reverse(n);
    
    return 0;
}