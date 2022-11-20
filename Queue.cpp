//
// Created by אושר כהן on 29/07/2022.
//

#include "Queue.h"
#include <iostream>
#include <string>
using namespace std;


Queue::Queue(){
    this->head=NULL;
    this->tail=NULL;
}

void Queue::enqueue(Account& node)
{
    if(this->head==NULL) {
        this->head = &node;
        this->tail = &node;
    }
    else{
        this->tail->setNext(node);
        this->tail=&node;
    }
}
Account& Queue::dequeue()
{
    Account*temp=this->head;
    if(this->head==this->tail)
        this->head=this->tail=NULL;
    else
        this->head=this->head->getNext();
    return *temp;
}

Account& Queue:: top()
{
    return *(this->head);
}

bool Queue::isempty() {
    return !(this->head);
}

/*void print(Queue& queue) {
    Queue temp;
    while (!(queue.isempty())) {
        print(queue.top());
        temp.enqueue(queue.dequeue());
    }
    queue = temp;
}
}*/

void Queue::show() {
    Account tmp;
    cout <<"Log1" << endl;
    while(!(this->isempty())) {
        cout <<"Log2" << endl;
        tmp=this->top();
        cout <<"Log3" << endl;
        tmp.show();
        cout <<"Log4" << endl;
        this->head=this->head->getNext();
    }
}


