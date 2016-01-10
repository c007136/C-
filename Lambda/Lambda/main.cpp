//
//  main.cpp
//  Lambda
//
//  Created by miniu on 15/10/29.
//  Copyright © 2015年 muyu. All rights reserved.
//  Lambda表达式
//  https://msdn.microsoft.com/zh-cn/library/dd293608.aspx
//  http://www.devbean.net/2012/05/cpp11-lambda/
//  http://www.cnblogs.com/hujian/archive/2012/02/14/2350306.html

#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <cstdlib>

using namespace std;

int main(int argc, const char * argv[])
{
    cout << [](float f) { return abs(f); } (-3.5) << endl;
    return 0;
}
