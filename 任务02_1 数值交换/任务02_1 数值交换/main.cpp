//
//  main.cpp
//  任务02_1 数值交换
//
//  Created by 一语书生 on 16/10/15.
//  Copyright © 2016年 一语书生. All rights reserved.
//

#include <iostream>
using namespace std;

void exchange1(int &x,int &y){
    cout<<"before:a="<<x<<" "<<"b="<<y<<endl;
    int temp = x;
    x = y;
    y = temp;
    cout<<"later:a="<<x<<" "<<"b="<<y<<endl;
}
void exchange1(int *x,int *y){
    cout<<"before:a="<<*x<<" "<<"b="<<*y<<endl;
    int temp = *x;
    *x = *y;
    *y = temp;
    cout<<"later:a="<<*x<<" "<<"b="<<*y<<endl;
}
int main(void) {
    int a=1,b=2;
    exchange1(a, b);
    exchange1(&a, &b);
    return 0;
}
