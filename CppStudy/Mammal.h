/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Mammal.h
 * Author: John
 *
 * Created on 2015年12月22日, 下午11:13
 */

#ifndef MAMMAL_H
#define MAMMAL_H

#include <iostream>
using namespace std;

class Mammal {
public:
    Mammal();
    Mammal(const Mammal& orig);
    virtual ~Mammal();
    virtual void Speak() const  {cout << "Mammal speak\n"; }
private:
    int itsAge;
};

class Dog:public Mammal
{
public:
    Dog(){cout << "Dog constructor...\n";}
    ~Dog(){cout << "Dog destructor...\n";}
    void Speak() const {cout << "Woof!\n";}
};

#endif /* MAMMAL_H */

