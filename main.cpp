//
// Created by אושר כהן on 29/07/2022.
//


#include "Account.h"
#include "Queue.h"
#include <iostream>

using namespace std;

int main()
{
    Queue q1;
    Account A1("Osher",2334);
    Account a2("Moshe",235345),a3("Ron",12332);
    q1.enqueue(a3);
    q1.enqueue(a2);
    q1.enqueue(A1);
    q1.dequeue();
    q1.dequeue();
    A1.setmoney(12122);
    q1.show();

    return 0;
}
