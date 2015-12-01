
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Student {
    int num, a, b;
    
    bool operator < (const Student &A) const {
        if (a + b != A.a + A.b)
            return a + b > A.a + A.b;
        else {
            if (a != A.a)
                return a > A.a;
            else
                return num < A.num;
        }
    }
};

int main()
{
    int n, l, h;
    scanf("%d %d %d\n", &n, &l, &h);
    Student tmp;
    vector<Student> v1, v2, v3, v4;
    
    for (int i = 0; i < n; ++i) {
        scanf("%d %d %d\n", &tmp.num, &tmp.a, &tmp.b);
        
        if (tmp.a < l || tmp.b < l)
            continue;
        
        if (tmp.a >= h && tmp.b >= h)
            v1.push_back(tmp);
        else if (tmp.a >= h && tmp.b < h)
            v2.push_back(tmp);
        else if (tmp.a < h && tmp.b < h && tmp.a >= tmp.b)
            v3.push_back(tmp);
        else
            v4.push_back(tmp);
    }
    
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    sort(v3.begin(), v3.end());
    sort(v4.begin(), v4.end());
    
    printf("%lu\n", v1.size()+v2.size()+v3.size()+v4.size());
    for (auto it = v1.begin(); it != v1.end(); ++it)
        printf("%d %d %d\n", (*it).num, (*it).a, (*it).b);
    for (auto it = v2.begin(); it != v2.end(); ++it)
        printf("%d %d %d\n", (*it).num, (*it).a, (*it).b);
    for (auto it = v3.begin(); it != v3.end(); ++it)
        printf("%d %d %d\n", (*it).num, (*it).a, (*it).b);
    for (auto it = v4.begin(); it != v4.end(); ++it)
        printf("%d %d %d\n", (*it).num, (*it).a, (*it).b);
    return 0;
}