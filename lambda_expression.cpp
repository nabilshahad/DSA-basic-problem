#include<iostream>
#include<vector>
using namespace std;

void print(vector<int> v){
    for(auto x : v)
      cout<<x<<" "<<endl;

}

int main(){
    vector<int> v1,v2;
    auto byRef =[&](int m){
        v1.push_back(m);
        v2.push_back(m);

    };

    auto byVal =[=](int m) mutable{
        v1.push_back(m);
        v2.push_back(m);
    };
    auto mixed =[&v1,v2](int m) mutable{
        v1.push_back(m);
        v2.push_back(m);

    };
    byRef(20);
    byVal(234);
    mixed(10);

    print(v1);
    print(v2);
    return 0;
    

    }