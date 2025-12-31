#include<iostream>
using namespace std;

int decTObinary(int decNum){
    int ans =0;
    int pow =1;
    while(decNum>0){
        int rem =decNum%2;
        decNum/=2;

        ans+=rem*pow;
        pow=pow*10;

    }
    return ans;

}


int bintoDec(int binNum){
    int ans=0;
    int pow =1;
    while(binNum>0){
        int rem= binNum%10;//getting reminder
        ans+=rem*pow;//here add ans also update a answer for each digit

        binNum/=10;//updating binNum
        pow=pow*2; ///updating power

    }
    return ans;

}

int main(){
   int decNum=50;
//    cout<<"Binary of that decimal number is : "<<decTObinary(decNum)<<endl;

// for(int i =1;i<=10;i++){
//     cout<<decTObinary(i)<<endl;

// }

int binNum =10011;
cout<<"Decimal of that binaru number is : "<<bintoDec(binNum)<<endl;

return 0;
}