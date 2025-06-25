#include<iostream>
#include<string>
#include<math.h>
using namespace std;

bool isarmstrong(int n){
    //to store orignal value
    int org=n;
    //know tptal number of digit
    int dig=to_string(n).length();
    //to store value sum
    int val=0;
    int lastd=0;;
    while(org > 0){

        lastd=org%10;

        val=pow(lastd,dig)+val;

        org=org/10;
    }
    cout<<"digigt sum :"<<val<<endl;
    if(val == n){
        return true;
    } 
    else{
        return false;
    }
}
 int main(){
    int value;
    cout<<"enter the value :";
    cin>>value;
    if(isarmstrong(value)){
        cout<<"the input value is Armstrong ";
    }
    else{
        cout<<"the input value is not Armstrong";
    }
    return 0;

 }