//
//  1016.cpp
//  myPlayground
//
//  Created by 黄然 on 15/11/27.
//  Copyright © 2015年 黄然. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a, b;
    char da, db;
    cin >> a >> da >> b >> db;
    
    int n = (int)count(a.begin(), a.end(), da);
    string str_a;
    for (int i = 0; i < n; ++i)
        str_a += da;
    int m = (int)count(b.begin(), b.end(), db);
    string str_b;
    for (int i = 0; i < m; ++i)
        str_b += db;
    
    int a_, b_;
    a_ = str_a.empty() ? 0 : stoi(str_a);
    b_ = str_b.empty() ? 0 : stoi(str_b);
    
    cout << a_ + b_ << endl;
    
    return 0;
}
