#ifndef __LINKED_LIST_FORWARD__
#define __LINKED_LIST_FORWARD__

#include <iostream>

class node{
    public:
        node(){this->next = NULL;}
        node* next;
        node* prev;
        int   data;
};

class linkedList{

    private:
        node *n;

    public:

        //Constructors and Deconstructors
        linkedList();
        ~linkedList();

        //Linked lists functions
        void ll_createNodes(int size);
        void ll_addNode(int data);
        bool ll_addDataNode(int index, int data);
        bool ll_removeNode(int index);
        int  ll_readNode(int index);

        //Print Functions
        void printAll();
    
};



#endif /* __LINKED_LIST_FORWARD__ */