//
//  1008.cpp
//  myPlayground
//
//  Created by 黄然 on 15/11/20.
//  Copyright © 2015年 黄然. All rights reserved.
//

#include <iostream>
using namespace std;

void RightMove(int *a, int n, int m)
{
    while (m--) {
        int temp = a[n-1];
        for (int i = n - 1; i > 0; --i) {
            a[i] = a[i - 1];
        }
        a[0] = temp;
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    
    if (m > n)
        m %= n;
    
    int a[n];
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    
    RightMove(a, n, m);
    
    for (int i = 0; i < n; ++i) {
        if (i != n - 1)
            cout << a[i] << " ";
        else
            cout << a[i] << endl;
    }
    return 0;
}
