#include<iostream>
using namespace std;

int main(){
    int num[]={2,5,45,43,56,-19,0};
    int size =7;


    int smallest =INT8_MAX;
    for(int i=0;i<size;i++){
        // if(num[i]<smallest){
        //     smallest = num[i];

        // }
        smallest =min(num[i],smallest);

    }
cout<<"The smallest number in the array is : "<<smallest<<endl;
 return 0;
}