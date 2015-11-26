//
//  1015.cpp
//  myPlayground
//
//  Created by 黄然 on 15/11/26.
//  Copyright © 2015年 黄然. All rights reserved.
//

#include <iostream>
#include <map>
#include <string>
#include <algorithm>
using namespace std;

typedef map<string, pair<int, int>> mp;

void printSort(mp m)
{
    int sz = (int)m.size();
    
    while (sz--) {
        int max = 0;
        mp::iterator maxIndex;
        for (auto b = m.begin(); b != m.end(); ++b) {
            int grade = b->second.first + b->second.second;
            if (max < grade)
                maxIndex = b;
        }
        
        printf("%d %d %d", stoi(maxIndex->first), maxIndex->second.first, maxIndex->second.second);
        maxIndex->second.first = 0;
        maxIndex->second.second = 0;
    }
}

int main()
{
    int n, l, h;
    cin >> n >> l >> h;
    mp m, m1, m2, m3, m4;
    
    string id;
    int a, b, tmp = n;
    while (tmp--) {
        cin >> id >> a >> b;
        m[id] = {a, b};
    }
    
    for (auto b = m.begin(); b != m.end(); ++b) {
        if (b->second.first < l || b->second.second < l)
            continue;
        
        if (b->second.first >= h && b->second.second >= h)
            m1[b->first] = b->second;
        else if (b->second.first >= h)
            m2[b->first] = b->second;
        else if (b->second.first >= b->second.second)
            m3[b->first] = b->second;
        else
            m4[b->first] = b->second;
    }
    
    cout << m1.size() + m2.size() + m3.size() + m4.size() << endl;
    printSort(m1);
    printSort(m2);
    printSort(m3);
    printSort(m4);
    
    return 0;
}
