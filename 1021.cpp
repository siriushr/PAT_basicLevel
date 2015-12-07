//
//  1021.cpp
//  myPlayground
//
//  Created by 黄然 on 15/12/3.
//  Copyright © 2015年 黄然. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string n;
    cin >> n;
    int digit[10] = {0};
    for (auto b = n.begin(); b != n.end(); ++b)
        ++digit[*b - '0'];
    
    for (int i = 0; i < 10; ++i)
        if (digit[i] != 0)
            cout << i << ":" << digit[i] << endl;
    
    return 0;
}
