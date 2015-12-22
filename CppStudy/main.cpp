/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: John
 *
 * Created on 2015年12月22日, 下午10:55
 */

#include <cstdlib>
#include <iostream>
#include "Rectangle.h"
#include "Mammal.h"

using namespace std;


/*
 * 
 */
int main(int argc, char** argv) {
    Rectangle oR1,oR2;
    cout << "Rect1:widtht:"<< oR1.GetHeight() << endl;
    cout << "hello, world,xiaoweilai" << endl;
    
    Mammal *pDog = new Dog;
    pDog->Speak();
    
    delete pDog;  /* 必须显式的调用删除对象才可以析构 */
    return 0;
}

