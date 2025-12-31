#include<iostream>
#include<vector>
using namespace std;

int main(){
int n=50;
int sum= 0;

for(int i =0;i<=n;i++){
    sum+=i;
    if(i==5)break;
}
cout<<"Sum is : "<<sum<<endl;}
