/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Rectangle.cpp
 * Author: John
 * 
 * Created on 2015年12月22日, 下午11:00
 */

#include "Rectangle.h"

Rectangle::Rectangle() {
    itsWidth  = 5;
    itsHeight = 10;
}

Rectangle::Rectangle(const Rectangle& orig) {
}

Rectangle::~Rectangle() {
}

Rectangle Rectangle::operator +(Rectangle & rhs)
{
    Rectangle objectR;
    objectR.itsWidth  = itsWidth + rhs.itsWidth;
    objectR.itsHeight = itsHeight + rhs.itsHeight;
    return objectR;
}