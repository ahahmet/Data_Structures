#include <iostream>
#include "queue.hpp"

template<class T> queue<T>::~queue()
{
    delete queue::queue_buffer;
    std::cout<<"QUEUE is destroyed"<<std::endl;
}


template<class T> void queue<T>::create_queue(size_t size)
{
    queue::queue_buffer = new T[size];
    queue::size = size;
}


template<class T> bool queue<T>::enqueue(T data)
{
    if(queue::write_index > queue::size)
    {
        std::cout<<"Queue is full"<<std::endl;
        return false;
    }

    queue_buffer[queue::write_index] = data;
    queue::write_index++;

    return true;
}


template<class T> bool queue<T>::dequeue(T* buffer)
{
    if(queue::read_index > queue::size)
    {
        std::cout<<"Queue is empty"<<std::endl;
        return false;
    }

    *buffer = queue_buffer[queue::read_index];
    queue::read_index++;

    return true;
}

template class queue<int>;
template class queue<char>;
template class queue<float>;
template class queue<double>;