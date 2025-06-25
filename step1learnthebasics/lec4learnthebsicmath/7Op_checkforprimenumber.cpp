#include<iostream>
#include<math.h>
using namespace std;

bool checkprime(int n){
    if(n == 1){
        return false;
    }
    for(int i=2;i<sqrt(n);i++){
        if(n%i == 0){
            return false;
        }

    }
    return true;
}

int main(){
    int n;
    cout<<"Enter the value of N:";
    cin>>n;
    if(checkprime(n)){
        cout<<"Entered number is prime number !!"<<endl;
    }
    else{
        cout<<"Entered number is not prime number !!"<<endl;
    }
}