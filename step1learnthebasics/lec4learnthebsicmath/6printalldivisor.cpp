#include<iostream>
#include<vector>
using namespace std;

vector<int> divisor(int n){
    vector<int> divi;
    for(int i=1;i<=n;i++){
        if(n % i == 0){
            divi.push_back(i);
        }
    }
    return divi;
}

int main(){
    int n;
    cout<<"enter the value of n :";
    cin>>n;
    vector<int> divisors=divisor(n);
    
    cout << "Divisors of " << n << " are: ";
    for (int div : divisors) {
        cout << div << " ";
    }
    cout << endl;


}