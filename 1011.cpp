//
//  1011.cpp
//  myPlayground
//
//  Created by 黄然 on 15/11/25.
//  Copyright © 2015年 黄然. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int n = t;
    
    while (t--) {
        long long a, b, c;
        cin >> a >> b >> c;
        bool flag = false;
        
        if (a + b > c)
            flag = true;
        
        cout << "Case #" << n - t << ": " << (flag? "true":"false") << endl;
    }
    return 0;
}
