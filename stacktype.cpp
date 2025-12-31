#include <iostream>
#include "stacktype.h";
using namespace std;

template<class ItemType>
StackType<ItemType>::StackType(){
    topptr =NULL;

}

template<class ItemType>
bool StackType<ItemType>::IsEmpty(){
    return (topptr==NULL);

}

template<class ItemType>
ItemType StackType<ItemType>::Top(){
    if(IsEmpty()){
        throw Emptystack();

    }
    else{
        return topptr->info;
    }
}
template<class ItemType>
bool StackType<ItemType>::IsFull(){
    Nodetype* location;
    try{
        location = new Nodetype;
        delete location;
        return false;

    }
    catch(bad_alloc& exception){
        return true;

    }
}

template<class ItemType>
void StackType<ItemType>::Push(ItemType newItem){
    if(IsFull()){
        throw Fullstack();
    }
    else{
        Nodetype* location;
        location = new Nodetype;
        location->info = newItem;
        location->next = topptr;
        topptr = location;

    }
}
template<class ItemType>
void StackType<ItemType>::Pop(){
    if(IsEmpty()){
        throw Emptystack();

    }
    else{
        Nodetype* tempptr;
        tempptr =topptr;
        topptr=topptr->next;
        delete tempptr;

    }
}
template<class ItemType>
StackType<ItemType>::~StackType(){
    Nodetype* tempptr;
    while(topptr !=NULL){
        tempptr=topptr;
        topptr=topptr->next;
        delete tempptr;
    }
}
template class StackType<int>;
