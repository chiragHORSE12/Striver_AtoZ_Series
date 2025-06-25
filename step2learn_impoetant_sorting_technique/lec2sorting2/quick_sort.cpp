#include<iostream>
#include<vector>
using namespace std;
int partition(vector<int> &arr,int low,int high){
    int pivot=arr[low];
    //store index of low into i 
    int i=low;
    //store index of high into j
    int j=high;

    if(i < j){
        //to point to the value greater than pivot
        while(arr[i] < pivot &&  i <= high){
            i++;
        }
        //to point to the value smaller than pivot
        while(arr[j] > pivot && j > low){
            j--;
        }
        //swap i & j
        if(i<j){
            swap(arr[i],arr[j]);
        }

    }
    //swap j & pivot element
    swap(arr[j],pivot);
    return j;
}

void quicksort(vector<int> &arr,int low,int high){
    if(low >= high){
        return ;
    }
    
    int pindex=partition(arr,low,high);
    //left array call
    quicksort(arr,low,pindex-1);

    //right array call
    quicksort(arr,pindex+1,high);
    
}

int main(){
    vector<int> arr={9, 4, 7, 6, 3, 1, 5};
    int n=7; 
    quicksort(arr,0,n-1); 
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }  
}