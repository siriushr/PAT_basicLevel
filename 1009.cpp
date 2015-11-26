//
//  1009.cpp
//  myPlayground
//
//  Created by 黄然 on 15/11/20.
//  Copyright © 2015年 黄然. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>
#include <iterator>
using namespace std;

int main()
{
    vector<string> s1, s2;
    string word;
    
    while (cin >> word)
        s1.push_back(word);
    
    for (auto b = s1.rbegin(); b != s1.rend(); ++b)
        s2.push_back(*b);
    
    for (auto b = s2.begin(); b != s2.end(); ++b)
        if (b != s2.end() - 1)
            cout << *b << " ";
        else
            cout << *b << endl;
    
    return 0;
}
