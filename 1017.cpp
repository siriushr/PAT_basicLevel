//
//  1017.cpp
//  myPlayground
//
//  Created by 黄然 on 15/11/27.
//  Copyright © 2015年 黄然. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    string a;
    vector<int> q;
    int b, r = 0, curr;
    cin >> a >> b;
    
    for (int i = 0; i < a.length(); ++i) {
        curr = r * 10 + a[i] - '0';
        q.push_back(curr / b);
        r = curr % b;
    }
    
    string shang;
    for (auto b = q.begin(); b != q.end(); ++b) {
        if (b == q.begin() && *b == 0)
            continue;
        cout << *b;
    }
    
    cout << " ";
    cout << r;
    cout << endl;
    
    return 0;
}
