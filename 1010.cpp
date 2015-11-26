//
//  1010.cpp
//  myPlayground
//
//  Created by 黄然 on 15/11/20.
//  Copyright © 2015年 黄然. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> x, z;
    int a, b;
    
    while (cin >> a >> b) {
        x.push_back(a);
        z.push_back(b);
    }
    
    int xi[x.size()], zhi[z.size()];
    auto b1 = x.begin(), b2 = z.begin();
    for (int i = 0; i < x.size(); ++i) {
        xi[i] = *b1++;
        zhi[i] = *b2++;
    }
    for (int i = 0; i < x.size(); ++i) {
        xi[i] *= zhi[i];
        --zhi[i];
    }
    
    cout << xi[0] << " " << zhi[0];
    for (int i = 1; i < x.size(); ++i) {
        if (xi[i] != 0) {
            cout << " ";
            cout << xi[i] << " " << zhi[i];
        }
    }
    cout << endl;
    return 0;
}
