#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    string s;
    stringstream stream;
    cin >> s;
    int n;
    
    auto pos = s.find('E');  //找到E所在的位置
    string s2 = s.substr(pos + 2);   //将指数部分拷贝进s2里
    stream << s2;
    stream >> n;  //将指数储存在n中
    
    if (s[pos + 1] == '-') {  //指数为负的情况下
        if (s[0] == '-')   //判断正负
            cout << '-';
        
        for (int i = 0; i < n; ++i) {  //n个0
            if (i == 1)
                cout << '.';
            cout << '0';
        }
        
        cout << s[1];
        for (int i = 3; i < pos; ++i)
            cout << s[i];
        
    } else {
        if (n >= pos - 3) {
            if (s[0] == '-')
                cout << '-';
            
            cout << s[1];
            for (int i = 3; i < pos; ++i)
                cout << s[i];
            
            for (int i = 0; i < n - (pos - 3); ++i)
                cout << '0';
            
        } else {
            if (s[0] == '-')
                cout << '-';
            
            cout << s[1];
            for (int i = 3; i < n + 3; ++i)
                cout << s[i];
            cout << '.';
            
            for (int i = n + 3; i < pos; ++i)
                cout << s[i];
        }
    }
    
    cout << endl;
    return 0;
}