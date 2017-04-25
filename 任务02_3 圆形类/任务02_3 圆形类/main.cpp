//
//  main.cpp
//  任务02_3 圆形类
//
//  Created by 一语书生 on 16/10/15.
//  Copyright © 2016年 一语书生. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

class Circle{
public:
    void set(float a,float b,float c){
        centreX = a;
        centreY = b;
        radius = c;
    }
    float area(void){
        return 3.14*radius*radius;
    }
    float perimeter(void){
        return 2*3.14*radius;
    }
    void print(void){
        cout<<"centre:("<<centreX<<","<<centreY<<")"<<endl;
        cout<<"radius:"<<radius<<endl;
        cout<<"area:"<<area()<<endl;
        cout<<"perimeter:"<<perimeter()<<endl;
    }
private:
    float centreX;
    float centreY;
    float radius;
};

int main(void) {
    Circle one;
    one.set(1.1, 2.2, 3);
    one.print();
    return 0;
}
