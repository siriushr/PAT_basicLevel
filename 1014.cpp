//
//  1014.cpp
//  myPlayground
//
//  Created by 黄然 on 15/11/25.
//  Copyright © 2015年 黄然. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

string get_day(string &s1, string &s2)
{
    char c;
    string day;
    auto b1 = s1.begin(), b2 = s2.begin();
    for (; b1 != s1.end() && b2 != s2.end();) {
        if (isalpha(*b1) && *b1 == *b2) {
            c = *b1;
            b1 = s1.erase(b1);
            b2 = s2.erase(b2);
            break;
        } else {
            b1 = s1.erase(b1);
            b2 = s2.erase(b2);
        }
    }
    
    switch (c) {
        case 'A': case 'a':
            day = "MON"; break;
        case 'B': case 'b':
            day = "TUE"; break;
        case 'C': case 'c':
            day = "WED"; break;
        case 'D': case 'd':
            day = "THU"; break;
        case 'E': case 'e':
            day = "FRI"; break;
        case 'F': case 'f':
            day = "SAT"; break;
        case 'G': case 'g':
            day = "SUN"; break;
        default:
            break;
    }
    return day;
}

int get_hour(string &s1, string &s2)
{
    char c;
    auto b1 = s1.begin(), b2 = s2.begin();
    for (; b1 != s1.end() && b2 != s2.end(); ) {
        if (*b1 == *b2) {
            c = *b1;
            break;
        } else {
            b1 = s1.erase(b1);
            b2 = s2.erase(b2);
        }
    }
    
    int hour;
    if (isdigit(c)) {
        hour = c - '0';
    } else {
        hour = c - 'A' + 10;
    }
    return hour;
}

int get_minute(string &s3, string &s4)
{
    int m;
    auto b1 = s3.begin(), b2 = s4.begin();
    for (; b1 != s3.end() && b2 != s4.end(); ++b1, ++b2) {
        if ( isalpha(*b1) && *b1 == *b2) {
            m = (int)(b1 - s3.begin());
            break;
        }
    }
    return m;
}
int main()
{
    string s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;
    string day;
    int hour, minute;
    
    day = get_day(s1, s2);
    hour = get_hour(s1, s2);
    minute = get_minute(s3, s4);
    
    cout << day << (hour < 10 ? " 0":" ") << hour
                << (minute < 10 ? ":0":":") << minute << endl;
    return 0;
}
