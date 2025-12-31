#include<iostream>
using namespace std;
bool powIsn(int n){
    return (n>0&&(n&(n-1))==0);// bitwise prove
 }
int main(){
    
cout<<powIsn(2)<<endl;
}