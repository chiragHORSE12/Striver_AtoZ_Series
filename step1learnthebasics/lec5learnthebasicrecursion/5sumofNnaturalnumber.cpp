#include<iostream>
using namespace std;

int naturalsum(int n,int sum){
    if(n == 0){
        return sum;
    }
    sum+=n;
    naturalsum(n-1,sum);
}

int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    int sum=0;
    cout<<"Sum of n :"<<n<<"natural number is : "<<naturalsum(n,sum);
}