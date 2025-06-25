#include<iostream>
using namespace std;

int main(){
    string s;
    cout<<"enter the string"<<endl;
    cin>>s;

    //pre-compute
    int hash[26]={0};
    for(int i=0;i<s.size();i++){
        hash[s[i] -'a']++;
    }

    //for how many value you want to check
    int q;
    cin>>q;
    while(q--){
        char c;
        cin>>c;

        cout<<hash[c-'a']<<endl;
    }
    return 0;
}