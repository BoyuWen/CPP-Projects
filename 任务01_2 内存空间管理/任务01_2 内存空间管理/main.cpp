//
//  main.cpp
//  任务01_2 内存空间管理
//
//  Created by 一语书生 on 16/9/26.
//  Copyright © 2016年 一语书生. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

void sort(string s){
    unsigned long len = s.length();    //曾出警告：length()和size（）等函数返回值为string::size_type类型
    for (int i=0;i<len/2; i++) {       //而非int或者unsigned  /*C++ Primer第五版 CH.P79/EN.P88*/
        char temp = s[i];
        s[i] = s[len-i-1];
        s[len-i-1] = temp;
    }
    cout<<s<<endl;
}

int main(void) {
    cout<<"请输入n：";
    int n,i;
    cin>>n;
    string *arr = new string[n];
    cout<<"请输入N个字符串:";
    for (i=0; i<n; i++) {
        cin>>arr[i];
    }
    cout<<"输入完毕,现在反序输出:"<<endl;
    for (i=0; i<n; i++) {
        sort(arr[i]);
    }
    delete []arr;
    return 0;
}
