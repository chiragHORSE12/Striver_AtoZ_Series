#include<iostream>
using namespace std;

int main(){
    int n=7789;
    int digitc=0;
    while(n > 0){
        digitc++;
        n=n/10;  
    }
    cout<<"Total Number of Digit is :"<<digitc<<endl;
    return 0;
}