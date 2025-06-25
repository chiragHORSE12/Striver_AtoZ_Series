#include<iostream>
using namespace std;

int main(){
    int n=7789;
    int reverse=0;
    int dump=n;
    
    while(n > 0){
        int lastd = n % 10;
        reverse=reverse*10+lastd;
        n=n/10;
    }
    if(dump == reverse){
        cout<<"palindrome"<<endl;
    }
    else{
        cout<<"not palindrome"<<endl;
    }
    
    return 0;
}