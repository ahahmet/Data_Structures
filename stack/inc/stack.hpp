#ifndef __STACK_FORWARD__
#define __STACK_FORWARD__



template<class T> 
class stack{
    private:
        T *stack_buffer;
        int index = 0;

    public:
        ~stack();
        void stack_create(size_t size);
        T pop();
        void push(T data);
        void printAll();
};


#endif /* __STACK_FORWARD__ */