//
//  1023.cpp
//  myPlayground
//
//  Created by 黄然 on 15/12/3.
//  Copyright © 2015年 黄然. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    int digit[10];
    for (int i = 0; i < 10; ++i)
        cin >> digit[i];
    
    for (int i = 1; i < 10; ++i)
        if (digit[i] != 0) {
            cout << i;
            --digit[i];
            break;
        }
    
    for (int i = 0; i < 10; ++i)
        if (!digit[i])
            continue;
        else {
            while (digit[i]--)
                cout << i;
        }
    
    cout << endl;
    return 0;
}