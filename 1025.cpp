//
//  1025.cpp
//  myPlayground
//
//  Created by 黄然 on 15/12/4.
//  Copyright © 2015年 黄然. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Line
{
    string addr;
    int data;
    string next;
    
  
};

int myFind(vector<Line> a, string addr)
{
    int i = 0;
    while (true) {
        if (a[i].addr == addr)
            return i;
        ++i;
    }
}

int main()
{
    string address;
    int n, k;
    vector<Line> a, b, c;
    cin >> address >> n >> k;
    
    for (int i = 0; i < n; ++i) {
        Line tmp;
        cin >> tmp.addr >> tmp.data >> tmp.next;
        a.push_back(tmp);
    }
    
    int index = 0, cnt = 0;
    while (n - cnt >= k) {
        for (int i = 0; i < k; ++i) {
            index = myFind(a, address);
            
            Line tmp;
            tmp.addr = a[index].addr; tmp.data = a[index].data; tmp.next = a[index].next;
            b.push_back(tmp);
            
            address = a[index].next;
            ++cnt;
        }
        
        reverse(b.begin(), b.end());
        copy(b.begin(), b.end(), c.end());
    }
    
    for (int i = 0; i < n - cnt; ++i) {
        index = myFind(a, address);
        c.push_back(a[index]);
        address = a[index].next;
    }
    
    for(auto b = c.begin(); b != c.end(); ++b) {
        (*b).next = (*(b+1)).addr;
    }
    for (auto i: c)
        cout << i.addr << " " << i.data << " " << i.next << endl;
    return 0;
}