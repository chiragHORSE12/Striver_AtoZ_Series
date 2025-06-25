#include<iostream>
using namespace std;

int main(){
    int row=5;
    int col=5;
    int arr[row][col]={0};
    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++){
            if((row+1)%(col+1)==0){
                if(arr[row][col]==0){
                    arr[row][col]=1;
                }
                else{
                    arr[row][col]=0;
                }
            }
        }
    }
    for(int i=0;i<col;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}