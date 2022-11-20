//
// Created by אושר כהן on 29/07/2022.
//

#ifndef CLASSWORK4_ACCOUNT_H
#define CLASSWORK4_ACCOUNT_H
#include <string>
#include <iostream>

// using namespace std;


class Account {
public:
    int getid()const;
    Account();
    Account(std::string,double);
    ~Account();
    void setmoney(double);
    double getmoney()const;
    void show();
    void setname(std::string);
    std::string getname()const;
    void setNext(Account &);
    Account* getNext()const;

    static int allid;
private:
    int id;
    std::string name;
    double money;
    Account * next;
};


#endif //CLASSWORK4_ACCOUNT_H
