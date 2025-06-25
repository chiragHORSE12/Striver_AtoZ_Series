#include<iostream>
#include<vector>
using namespace std;

void MoveZero(vector<int> &arr,int last){
    int rep=0;
    for(int i=0;i<=last;i++){
        if(arr[i] != 0){
            arr[rep++]=arr[i];
            //arr k i element k value rep par dal raha hu
        }
    }
        while(rep<=last){
            arr[rep++]=0;
        }

return ;
}

int main(){
    vector<int> arr{1,0,2,3,4,0,5,0,6,8,7,0,2,1};
    int siz=arr.size()-1;
    MoveZero(arr,siz);
    for(int i=0;i<siz;i++){
        cout<<arr[i]<<" ";
       }  
return 0;
}