#ifndef STACKTYPE_H_INCLUDED
#define STACKTYPE_H_INCLUDED
class Fullstack{};
class Emptystack{};
template<class ItemType>
class StackType{
    struct Nodetype{
        ItemType info;
        Nodetype* next;

    };
    public:
    StackType();
    ~StackType();
    void Push(ItemType);
    void Pop();
    ItemType Top();
    bool IsEmpty();
    bool IsFull();
    private:
    Nodetype* topptr;
    
};

#endif