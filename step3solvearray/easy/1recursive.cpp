#include<iostream>
#include<vector>
using namespace std;
int largestElement(vector <int>& nums) {
        int max=INT64_MIN;
        for(int i=0;i<nums.size();i++){
            if(max<nums[i]){
                max=nums[i];
            }
        }
        return max;

    }

int main(){
    vector<int> vec{12,10,45,55,55,6,63};
    cout<<"The largest element in array is : "<<largestElement(vec)<<endl;
    return 0;

}