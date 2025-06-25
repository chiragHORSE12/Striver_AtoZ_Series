#include<iostream>
using namespace std;

int main(){
    int n=7789;
    int reverse=0;
    
    while(n != 0){
        int lastd = n % 10;
        //to reduce size of bit while multiply with 10
        if((reverse >INT_FAST64_MAX/10)||(reverse <INT_FAST64_MIN)){
            return 0;
        }
        
        reverse=reverse*10+lastd;
        n=n/10;
    }
    cout<<"reverse digit is :"<<reverse<<endl;
    return 0;
}