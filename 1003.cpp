//
//  main.cpp
//  1003
//
//  Created by 黄然 on 15/10/8.
//  Copyright (c) 2015年 黄然. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    
    for (int j = 0; j < n; j++) {
        char str[101];
        cin >> str;
        bool check = false;
        
        // 开始判定

        int cntP = 0, cntT = 0;
        int indexP = 0, indexT = 0;
        int i;
        for (i = 0; str[i] != '\0'; i++) {
            
            if (str[i] == 'P') {
                cntP++;
                indexP = i;
            } else if (str[i] == 'T') {
                cntT++;
                indexT = i;
            } else if (str[i] == 'A') {
                continue;
            } else {
                check = false;
                break;
            }
        }
        
        if (cntP != 1 || cntT != 1) {
            check = false;
        } else if (indexP >= indexT - 1) {
            check = false;
        } else if (indexP * (indexT - indexP - 1) == i - 1 - indexT) {
            check = true;
        }
        
        if (str[i] != '\0') {
            check = false;
        }
        
        
        // 最终输出结果
        if (check) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
