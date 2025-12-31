#include<iostream>
#include<stack>
#include<string>
using namespace std;

class solution{

    public:
    bool isValid(string str){
     stack<char> st;
     for(int i=0;i<str.size();i++){
        if(str[i]=='('||str[i]=='{'||str[i]=='[') st.push(str[i]);
        else{
            if(str.size()==0){return false;}

          if((st.top()=='('&& str[i]==')')||(st.top()=='{'&& str[i]=='}')||(st.top()=='['&& str[i]==']'))  {
            st.pop();
          }
          else return false;
        }
     }
    }

};

int main(){
    solution obj;
    string str="({()})";
    cout<<obj.isValid(str)<<endl;
    return 0;
}


