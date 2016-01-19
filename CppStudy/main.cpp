///*
// * To change this license header, choose License Headers in Project Properties.
// * To change this template file, choose Tools | Templates
// * and open the template in the editor.
// */
//
///* 
// * File:   main.cpp
// * Author: John
// *
// * Created on 2015年12月22日, 下午10:55
// */
//
//#include <cstdlib>
//#include <iostream>
//#include "Rectangle.h"
//#include "Mammal.h"
//#include <stdio.h>
//#include <stdarg.h>
//
//
//
//
//using namespace std;
//
//
//
//void ut_printf(char *fmt,...)
//{
//    va_list ap;
//    char buf[1024] = {'\0'};
//
//    va_start(ap,fmt);
//    vsnprintf(buf, sizeof(buf), fmt, ap);
//    va_end(ap);
//
//    printf(buf);
//}
//
///*
// * 
// */
//int main(int argc, char** argv) {
//    
//    printf("Hello World!\n");
//    ut_printf("so good!!\n");
//    ut_printf("int %d:\n", 123);
//    ut_printf("int %s:\n", "123");
//
//    
//    Rectangle oR1,oR2;
//    cout << "Rect1:widtht:"<< oR1.GetHeight() << endl;
//    cout << "hello, world,xiaoweilai" << endl;
//    
//    Mammal *pDog = new Dog;
//    pDog->Speak();
//    
//    delete pDog;  /* 必须显式的调用删除对象才可以析构 */
//    return 0;
//}
//


//
//#include <stdio.h>
//#include <stdarg.h>
//
//int add_va(int num, int first, ...) {
//        int ret = 0, arg, i;
//        va_list ap;  //定义一个可变参数变量
//
//        ret = first;
//        va_start(ap,first); //初始化可变参数
//        for(i = 1; i < num;i++) {
//                arg = va_arg(ap,int);//获取下一个类型为int的参数
//                ret += arg;
//        }
//
//        va_end(ap);//清除变量ap
//        return ret;
//}
//
//int add_normal(int num, ...) {
//        int *p, i;
//        int ret;
//        p = &num + 1; //p指向参数列表下一个位置
//        ret = *p;
//        printf("ret:%d\n", ret);
//        printf("num:%d\n", num);
//
//        for(i = 1; i < num; i++)
//                ret +=p[i];
//
//        return ret;
//}
//
//int main(int argc, char **argv) {
//        printf("%d\n", add_va(5,1,2,3,4,5));
//        printf("%d\n", add_normal(5,1,2,3,4,5));
//        return 0;
//}
//
///*
//15
//ret:1
//num:5
//15
//
//运行 SUCCESSFUL (总时间:  104ms)
//
// 
// */




#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

void printf_diy(char *fmt,...) {
        va_list arg;
        char c;

        va_start(arg, fmt);

        do {
                c = *fmt;
                if(c != '%'){
                        putchar(c); //输出
                }
                else {
                        fmt++;
                        switch(*fmt) {
                        case 'd':
                                printf("%d", *((int*)arg));
                                break;
                        case 'x':
                                printf("%#x", *((int*)arg));
                                break;
                        case 'f':
                                printf("%f", *((float*)arg));
                        default:
                                break;
                        }

                        va_arg(arg,int);
                }

                ++fmt;

        } while (*fmt != '\0');

        va_end(arg);
        return;
}

int main(int argc, char **argv) {
        int i = 1234;
        int j = 5678;
        float f = 13.9;

        printf_diy("i = %d\n", i);
        printf_diy("j = %d\n", j);
        printf_diy("f = %f\n", f);
        return 0;
}
                                                                                 
