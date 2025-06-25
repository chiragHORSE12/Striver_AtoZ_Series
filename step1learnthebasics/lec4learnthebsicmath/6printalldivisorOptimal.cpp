#include<iostream>
#include<math.h>
#include<vector>
using namespace std;
vector<int> divisor(int n){
    vector<int> divi;
    for(int i=1;i<=sqrt(n);i++){
        if(n % i == 0){
            divi.push_back(i);
            //to remove duplicate value 
            if((n/i) != i){
                divi.push_back(n/i);
            }
        }
    }
    return divi;
}

int main(){
    int n;
    cout<<"Enter the value of n :";
    cin>>n;
    vector<int> divisors=divisor(n);

    cout << "Divisors of " << n << " are: ";
    for (int div : divisors) {
        cout << div << " ";
    }
    cout << endl;
}