#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int m[3] = {0};
    
    for (int i = 2; n != 0; i--) { //把n的每一位都放入对应m中
        m[i] = n % 10;
        n /= 10;
    }
    
    for (int i = 0; i < 3; i++) {
        if (i == 0) {
            for (int j = 0; j < m[0]; j++) {
                cout << 'B';
            }
        } else if (i == 1) {
            for (int j = 0; j < m[1]; j++) {
                cout << 'S';
            }
        } else {
            for (int j = 0; j < m[2]; j++) {
                cout << j + 1;
            }
        }
    }
    
    return 0;
}