#include <iostream>
using namespace std;

void test(int sum, int d) {
    if (sum / d == 0)
        cout << sum % d;
    else {
        test(sum / d, d);
        cout << sum % d;
    }
}

int main()
{
    int a, b, d;
    cin >> a >> b >> d;
    
    int sum = a + b;
    test(sum, d);
    cout << endl;
    
    return 0;
}