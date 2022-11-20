//
// Created by אושר כהן on 29/07/2022.
//

#ifndef CLASSWORK4_QUEUE_H
#define CLASSWORK4_QUEUE_H
#define MAX_SIZE 10
#include "Account.h"


class Queue {

    //friend void print(Queue&);
public:
    Queue();
    void enqueue(Account&);
    Account& dequeue();
    Account& top();
    bool isempty();
    void show();
private:
    Account * head;
    Account * tail;


};


#endif //CLASSWORK4_QUEUE_H
