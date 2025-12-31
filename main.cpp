#include<iostream>
#include"unsortedtype.cpp"
using namespace std;

template<class T>
void print(UnsortedType<T> &list){
    for(int i=0;i<list.LengthIs();i++){
    int item;
    list.ResetList();
    int a[100]=list.GetNextItem(item);
    cout<<a<<"  ";
}

}

int main(){


UnsortedType<int> list;
list.InsertItem(5);
list.InsertItem(6);
list.InsertItem(7);
list.InsertItem(9);
print(list);
cout<<endl;
for(int i=0;i<list.LengthIs();i++){
    int item;
    list.GetNextItem(item);
    cout<<item<<"  ";
}
cout<<endl;
cout<<list.LengthIs()<<endl;
cout<<"----"<<endl;
list.ResetList();
// list.InsertItem(1);
// for(int i=0;i<list.LengthIs();i++){
//     int item;
//     list.GetNextItem(item);
//     cout<<item<<"  ";
// }
cout<<endl;
int a=4;
bool found;
list.RetrieveItem(a, found);


    if(found ==true){
        cout<<"Item is found"<<a<<endl;

    }
    else cout<<"Item is not found"<<endl;


// list.ResetList();

// cout<<(list.IsFull() ? "full":"not full")<<endl;

print(list);
return 0;
}