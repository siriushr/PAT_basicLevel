//
//  1012.cpp
//  myPlayground
//
//  Created by 黄然 on 15/11/25.
//  Copyright © 2015年 黄然. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int even_add(vector<int> &v)
{
    int sum = 0;
    for (auto b = v.begin(); b != v.end(); ++b) {
        sum += *b;
    }
    return sum;
}

int cross_add(vector<int> &v)
{
    int sum = 0, sign = 1;
    for (auto b = v.begin(); b != v.end(); ++b) {
        if (sign % 2)
            sum += *b;
        else
            sum -= *b;
        ++sign;
    }
    return sum;
}

double avg(vector<int> &v)
{
    double a, sum = 0;
    for (auto b = v.begin(); b != v.end(); ++b)
        sum += *b;
    return a = sum / (int)v.size();
    
}

int maximum(vector<int> &v)
{
    int max = 0;
    for (auto b = v.begin(); b != v.end(); ++b)
        if (max < *b)
            max = *b;
    
    return max;
}

int main()
{
    int n, k;
    vector<int> vec;
    cin >> n;
    while (n--) {
        cin >> k;
        vec.push_back(k);
    }
    
    int a1, a2, a3, a5;
    double a4;
    vector<int> va1, va2, va3, va4, va5;
    
    for (auto b = vec.begin(); b != vec.end(); ++b) {
        if (*b % 5 == 0 && *b % 2 == 0)
            va1.push_back(*b);
        else if (*b % 5 == 1)
            va2.push_back(*b);
        else if (*b % 5 == 2)
            va3.push_back(*b);
        else if (*b % 5 == 3)
            va4.push_back(*b);
        else if (*b % 5 == 4)
            va5.push_back(*b);
    }
    
    if (!va1.empty()) {
        a1 = even_add(va1);
        cout << a1;
    } else
        cout << "N";
    cout << " ";
   
    if (!va2.empty()) {
        a2 = cross_add(va2);
        cout << a2;
    } else
        cout << "N";
    cout << " ";
    
    if (!va3.empty()) {
        a3 = (int)va3.size();
        cout << a3;
    } else
        cout << "N";
    cout << " ";
    
    if (!va4.empty()) {
        a4 = avg(va4);
        printf("%.1f", a4);
    } else
        cout << "N";
    cout << " ";
    
    if (!va5.empty()) {
        a5 = maximum(va5);
        cout << a5;
    } else
        cout << "N";
    cout << endl;
    return 0;
}
