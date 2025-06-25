#include<iostream>
#include<math.h>
using namespace std;

int seriessum(int n,int sum){
    int sq=pow(n,3);
    if(n == 0){
        return sum;
    }
    //n=5 ->(1^3)+(2^3)+(3^3)+(4^3)+(5^3)
    sum=sum+sq;
    seriessum(n-1,sum);
}

int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int sum=0;
    cout<<"sum of n natural number is :"<<seriessum(n,sum);
}