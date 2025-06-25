#include<iostream>
#include<math.h>
using namespace std;


int countd(int n){
    //log10(7789)->3.89 ->3.89+1=4.89 
    //fractional value discard then 4
    int cnt=(int)(log10(n)+1);
    return cnt;
}
int main(){
    int n=7789;
    int digit=countd(n);
    cout<<"number of digit is :"<<digit<<endl;
    return 0;
}