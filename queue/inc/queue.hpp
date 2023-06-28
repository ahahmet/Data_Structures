#ifndef __QUEUE__
#define __QUEUE__


template<class T>
class queue{
    private:
        T *queue_buffer;
        int write_index = 0;
        int read_index = 0;
        size_t size;

    public:
        ~queue();
        void create_queue(size_t size);
        bool enqueue(T data);
        bool dequeue(T* buffer);
        //void printAll();
};

#endif /* __QUEUE__ */