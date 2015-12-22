/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Rectangle.h
 * Author: John
 *
 * Created on 2015年12月22日, 下午11:00
 */

#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
public:
    Rectangle();
    Rectangle(const Rectangle& orig);
    virtual ~Rectangle();
    int GetWidth() const {return itsWidth;}
    int GetHeight() const {return itsHeight;}
    Rectangle operator+(Rectangle &);
private:
    int itsWidth;
    int itsHeight;
};

#endif /* RECTANGLE_H */

