#include <iostream>
using namespace std;

int atoi(char x) {
    int n;
    n = x - '0';
    return n;
}

void pingyin(int x) {
    switch (x) {
        case 0: cout << "ling"; break;
        case 1: cout << "yi"; break;
        case 2: cout << "er"; break;
        case 3: cout << "san"; break;
        case 4: cout << "si"; break;
        case 5: cout << "wu"; break;
        case 6: cout << "liu"; break;
        case 7: cout << "qi"; break;
        case 8: cout << "ba"; break;
        case 9: cout << "jiu"; break;
    }
}

int main() {
    char array[101];
    cin >> array;
    int n[100], sum = 0, digit = 0, cnt_1 = 0, cnt = 0;
    
    for (int i = 0; array[i] != '\0'; i++) {
        n[i] = atoi(array[i]);
        cnt_1++;
    }
    
    for (int i = 0; i < cnt_1; i++) {
        sum += n[i];
    }// 得到所有数字的和sum
    
    int tmp;
    tmp = sum;
    while (tmp > 0) {
        tmp /= 10;
        cnt++;
    } //得到sum的位数cnt
    
    int rev[cnt];
    rev[0] = 0;
    for (int i = 1; i < cnt; i++) {
        rev[i] = 0;
    }
    int tmp_cnt;
    tmp_cnt = cnt;
    while (sum > 0) {
        digit = sum % 10;
        sum /= 10;
        rev[--tmp_cnt] = digit;
    } //将sum的每一位存储在rev中
    
    pingyin(rev[0]);
    for (int i = 1; i < cnt; i++) {
        cout << ' ';
        pingyin(rev[i]);
    }
    
    return 0;
}