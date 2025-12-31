#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec={5,3,4,7,6,10};
    int key =6;

    bool found =(find(vec.begin(),vec.end(),key)!=vec.end());
    cout<<"found(linear search): "<<found<<endl;

    //binary search
    bool binaryfound= binary_search(vec.begin(),vec.end(),key);
    cout<<"found(binary search): "<<binaryfound<<endl;

    //lower bound
    int firstIndex= lower_bound(vec.begin(),vec.end(),key)-vec.begin();
    cout<<"first index of < key "<<firstIndex<<endl;


    //upper bound
    int lastIndex = upper_bound(vec.begin(),vec.end(),key)-vec.begin();
    cout<<"last index of > key "<<lastIndex<< endl;
    
}