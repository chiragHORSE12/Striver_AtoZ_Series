#include<iostream>
#include<vector>
using namespace std;

int LinearSearch(vector <int> &arr,int n,int Selement){
    for(int i=0;i<n;i++){
        if(arr[i]==Selement){
            return i+1;
        }
    }
    return -1;
}

int main(){
    vector<int> arr{1,2,5,485,47,8,478,74,44,647,4,41,5,464};
    int maxlen=arr.size()-1;
    int CheckElement;
    cout<<"Enter the Element to be Search : ";
    cin>>CheckElement;
    int  ans=LinearSearch(arr,maxlen,CheckElement);
    cout<<"Element present at : "<<ans<<endl;
    return 0;
}