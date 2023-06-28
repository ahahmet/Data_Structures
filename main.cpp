#include <iostream>
#include "linked_list.hpp"
#include "stack.hpp"
#include "queue.hpp"


using namespace std;


int main()
{

    int data;

#ifdef TEST_LINKED_LIST
    linkedList l;

    l.ll_createNodes(2);
    l.ll_addDataNode(1, 5);
    l.ll_addDataNode(2, 7);

    l.ll_addNode(10);
    l.ll_addNode(20);
    l.ll_addNode(30);
    l.ll_addNode(40);

    l.printAll();

    l.ll_removeNode(1);

    l.printAll();
#endif

#ifdef TEST_STACK

    stack<int> s1;

    s1.stack_create(5);

    s1.push(10);
    s1.push(20);
    s1.push(30); 

    s1.printAll();

    data = s1.pop(); 
    cout<<"Data = "<<data<<endl;    

    s1.printAll();

#endif


#ifdef TEST_QUEUE

    queue<int> q1;

    q1.create_queue(10);

    q1.enqueue(25);
    q1.enqueue(50);
    q1.enqueue(75);
    q1.enqueue(100);

    q1.dequeue(&data);
    std::cout<<"Data is = "<<data<< std::endl;

    q1.dequeue(&data);
    std::cout<<"Data is = "<<data<< std::endl;

    q1.dequeue(&data);
    std::cout<<"Data is = "<<data<< std::endl;

    q1.dequeue(&data);
    std::cout<<"Data is = "<<data<< std::endl;

#endif


}