#include<iostream>
#include<vector>
#include<math.h>
//N->new question related to previous question 

using namespace std;
void sumofdiv(int i,int n,int& s){
    //to find sum of divisor of i
    for(int j=1;j<=sqrt(i);j++){
         if(i%j == 0){
             s=s+j;
             //remove duplicate
             if((i/j) != j){
                 int sec=(i/j);
                 s=s+sec;
                }
            }
     }
}
int sumOfDivisors(int n) {
    int sum=0;
    for(int i=1;i<=n;i++){
        sumofdiv(i,n,sum);
    }
    return sum;
}

int main(){
    int n;
    cout<<"Enter the value of n :";
    cin>>n;
    cout<<"the sum of all divisor from 1 to "<<n<<" is :"<<sumOfDivisors(n)<<endl;
    return 0;
}