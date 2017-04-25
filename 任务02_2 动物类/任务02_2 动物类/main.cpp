//
//  main.cpp
//  任务02_2 动物类
//
//  Created by 一语书生 on 16/10/15.
//  Copyright © 2016年 一语书生. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

class Animal{
public:
    void alterName(string nameLater){
        name = nameLater;
    }
    void alterSex(string sexLater){
        sex = sexLater;
    }
    void alterColor(string colorLater){
        color = colorLater;
    }
    void alterVoice(string voiceLater){
        voice = voiceLater;
    }
    void print(void){
        cout<<"name="<<name<<endl;
        cout<<"sex="<<sex<<endl;
        cout<<"color="<<color<<endl;
        cout<<"voice="<<voice<<endl;
    }
private:
    string name;
    string sex;
    string color;
    string voice;
};

int main(void) {
    Animal dog;
    dog.alterName("dog");
    dog.alterSex("male");
    dog.alterColor("yellow");
    dog.alterVoice("wnagwang");
    dog.print();
    return 0;
}
