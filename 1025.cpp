//
//  1025.cpp
//  myPlayground
//
//  Created by 黄然 on 16/3/13.
//  Copyright © 2016年 黄然. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

struct Node {
    int addr;
    int data;
    int next;
};

int main() {
    vector<Node> vin(100000), vsorted, vout;
    int n, k;
    int head;
    cin >> head >> n >> k;
    
    Node tmp;
    for (int i = 0; i < n; i++) {
        cin >> tmp.addr >> tmp.data >> tmp.next;
        vin[tmp.addr] = tmp;
    }//输入完毕
    
    int cnt = 0;
    while (head != -1) {
        vsorted.push_back(vin[head]);
        head = vin[head].next;
        cnt++;
    }//排序完毕
    
    int right = k-1;
    while (right<cnt) {
        for (int i = right; i>right-k; i--)
            vout.push_back(vsorted[i]);
        right +=k;
    }//翻转链表
    right -=k;
    for (int i = right+1; i < cnt; i++) {
        vout.push_back(vsorted[i]);
    }//把剩余未翻转的部分加入输出链表
    
    //输出
    int i = 0;
    printf("%05d %d ", vout[i].addr, vout[i].data);
    for (i = 1; i < cnt; i++){
        printf("%05d\n%05d %d ", vout[i].addr, vout[i].addr, vout[i].data);
    }
    
    printf("-1\n");
    
    return 0;
}