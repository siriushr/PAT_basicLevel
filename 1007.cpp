#include <cmath>
#include <iostream>
using namespace std;

bool checkPrime(int x) {
    bool prime = true;
    
    for (int i = 2; i <= sqrt(x); i++) {
        if (x % i == 0) {
            prime = false;
            break;
        }
    }
    
    return prime;
}

int main() {
    int n;
    cin >> n;
    
    int t[n];
    for (int i = 0; i < n; i++) {
        t[i] = 0;
    }
    
    int j = 0;
    for (int i = 2; i <= n; i++) { //生成一个素数表t
        if (checkPrime(i)) {
            t[j++] = i;
        }
    }
    
    int cnt = 0;
    for (int i = 1; i < j; i++) {  //cnt计数，素数对的个数
        if (t[i] - t[i - 1] == 2) {
            cnt++;
        }
    }
    
    cout << cnt << endl;
    return 0;
}
