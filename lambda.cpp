#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> nums ={5,1,8,3,9,2};

    sort(nums.begin(),nums.end(), [](const int& a,int &b){ 
        return a<b;});

    for( int n: nums){
        cout<<n<<" ";
        return 0;

    }
}