#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);


    cout<<"Array elements: \n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;

    }
    vector<int>list;

    list.push_back(10);
    list.push_back(20);
    list.push_back(30);

    cout<<"Vector elements: \n";


    for(int i=0;i<list.size();i++){
        cout<<list[i]<<endl;
        
    }

return 0;
}