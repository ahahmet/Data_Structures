#include <iostream>
#include "stack.hpp"

using namespace std;

template<class T> stack<T>::~stack()
{
    delete stack::stack_buffer;
    cout<<"STACK is destroyed"<<endl;
}

template<class T> void stack<T>::stack_create(size_t size)
{
    stack::stack_buffer = new T[size];
}

template<class T> T stack<T>::pop()
{
    if(stack::index < 0){
        cout<<"Stack underflow !!!"<<endl;
        exit(0);
    }
    stack::index--;
    return stack::stack_buffer[index];
    
}

template<class T> void stack<T>::push(T data)
{
    if(stack::index > (sizeof(stack::stack_buffer)/sizeof(stack::stack_buffer[0]))){
        cout<<"Stack overflow !!!"<<endl;
        exit(0);
    }

    stack::stack_buffer[stack::index] = data;
    
    stack::index++;
}


template<class T> void stack<T>::printAll()
{
    if(stack::index < 0){
        cout<<"Element size err"<<endl;
        exit(0);
    }

    for(int i=0; i<stack::index; i++)
    {
        cout<<"Data["<<i<<"] = "<<stack::stack_buffer[i]<<endl;
    }
}


template class stack<int>;
template class stack<char>;
template class stack<float>;
template class stack<double>;