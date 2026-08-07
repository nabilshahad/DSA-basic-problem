#include <iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int> arr,int tar){
   int  start=0;
    int end=arr.size()-1;
    while(start<=end){
        int mid=start+ (end-start)/2; // To avoid overflow
        if(tar>arr[mid]){
            start = mid+1;

        }
        else if(tar<arr[mid]){
            end=mid-1;
        }
        else{
            return mid; // Element found, return its index
        }
    }
    return -1; // Element not found
}

int main(){
    vector<int> arr={2,3,4,6,23,24,25,30};
    int target =25;
    int index= binarySearch(arr,target);
    if(index != -1){
        cout<<"Element found at index: "<<index<<endl;
    } else {
        cout<<"Element not found"<<endl;
    }
    return 0;
}