#include <iostream>
#include <algorithm>
using namespace std;

int ascend, descend;
void getNumber(int n)
{
    int a[4];
    for (int i = 0; i < 4; ++i) {
        a[i] = n % 10;
        n /= 10;
    }
    
    sort(a, a+4);
    descend = a[3] * 1000 + a[2] * 100 + a[1] * 10 + a[0];
    ascend = a[0] * 1000 + a[1] * 100 + a[2] * 10 + a[3];
}

int main()
{
    int n;
    cin >> n;
    
    do {
        getNumber(n);
        
        n = descend - ascend;
        printf("%04d - %04d = %04d\n", descend, ascend, n);
        
        if (ascend == descend)
            break;
    } while (n != 6174);
    
    return 0;
}