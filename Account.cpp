//
// Created by אושר כהן on 29/07/2022.
//
#include <iostream>
#include "Account.h"
#include <string>
int Account::allid=0;
using namespace std;

Account* Account::getNext()const {
    return this->next;
}

void Account::setNext(Account &node)
{
    this->next=&node;
}

Account::Account()
: next(nullptr)
{
    name="NONE";
    allid++;
    id=allid;
    money=0;
}
Account::Account(string s,double m)
: next(nullptr)
{
    id=++allid;
    name=s;
    setmoney(m);
}

void Account::setname(string s) {
    name=s;
}

string Account::getname() const {
    return name;
}

void Account::setmoney(double m) {
    money=m;
}

double Account::getmoney() const {
    return money;
}

Account::~Account() {
    cout<<"destructor-_-"<<" "<<id<<endl;
}

void Account::show() {
    cout<< to_string(id)<<"  "<<name<<"  "<<to_string(money)<<endl;
}

int Account::getid() const {
    return id;
}
