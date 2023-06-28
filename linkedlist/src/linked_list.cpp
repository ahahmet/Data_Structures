#include <iostream>
#include "linked_list.hpp"

using namespace std;  


linkedList::linkedList()
{
    n = new node;
    n->data = 0; 
}

linkedList::~linkedList()
{
    node*  iter = n;

    do{
        iter = iter->next;
        
        if(iter->next == NULL)
        {
            delete iter;
            iter = n;
        }

    }while(!iter->next);
}

void linkedList::ll_createNodes(int size)
{
    node* iter = n;

    for(int i=0; i<size; ++i)
    {
        node* new_n = new node();
        iter->next = new_n;
        iter = iter->next;
    }
    
}


bool linkedList::ll_addDataNode(int index, int data)
{
    node* iter = n;

    for(int i=0; i<index; ++i){
        if(!iter->next) return false;
        iter = iter->next;
    } 

    iter->data = data;
    
    return true;
}

void linkedList::ll_addNode(int data)
{
    node* new_n = new node();
    node* iter = n;

    while(iter->next){
        iter = iter->next;
    }
    
    new_n->data = data;
    iter->next = new_n;
}

bool linkedList::ll_removeNode(int index)
{
    node* iter = n;
    node* temp;

    if(!iter->next){
        cout<<"There is no element to delete"<<endl;
        return false;
    }

    for(int i=0; i<index-1; ++i)
    {
        if(!iter->next)
            return false;           
    }
    
    temp = iter;
    iter = iter->next;
    temp->next = iter->next;

    delete iter;

    return true;
}

int linkedList::ll_readNode(int index)
{
    node* iter;

    for(int i=0; i<index; ++i)
    {
        if(!iter->next){
            return -1;
        }

        iter = iter->next;
    }

    return iter->data;
}

void linkedList::printAll()
{
    node* iter = n;

    while(iter)
    {
        cout<<"element is = "<< iter->data << endl;
        iter = iter->next;
    } 
}
