//
//  1013.cpp
//  myPlayground
//
//  Created by 黄然 on 15/11/25.
//  Copyright © 2015年 黄然. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n)
{
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0)
            return false;
    }
    return true;
}
int main()
{
    int i = 0, n = 2, cnt = 0;
    int M, N;
    cin >> M >> N;
    
    while (i < N) {
        if (!isPrime(n)) {
            ++n;
            continue;
        }
        
        ++i;
        if (i < M) {
            ++n;
            continue;
        }
        
        ++cnt;
        if (cnt < 10 && i != N) {
            cout << n << " ";
            ++n;
        } else if (cnt == 10 && i != N) {
            cout << n << endl;
            cnt = 0;
            ++n;
        } else {
            cout << n;
        }
    }
    cout << endl;
    return 0;
}
