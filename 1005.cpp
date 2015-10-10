#include <iostream>
using namespace std;

//covered函数：用于判断n是否已存在在key数组中
bool covered(int n, int *key) {
    for (int i = 0; key[i] != 0; i++) {
        if (n == key[i]) {
            return true;
        }
    }
    return false;
}

int main() {
    int k;
    cin >> k;
    int num[k];
    for (int i = 0; i < k; i++) {
        cin >> num[i];
    }
    
    int key[300] = {0}, j = 0; //用key数组来存储覆盖数


    for (int i = 0; i < k; i++) { //得到一个完整的key表
        //判断num[i]是否已被覆盖
        if (covered(num[i], key)) { //若已覆盖，则进行下一轮循环
            continue;
        }
        
        int tmp = num[i];
        while (tmp != 1) {  //将num[i]的（3n+1）处理数 加入key
            if (tmp % 2) {
                tmp = tmp * 3 + 1;
            }
            tmp /= 2;
            
            if (covered(tmp, key) == false) {
                key[j] = tmp;
                j++;
            } else {
                break;
            }
        }
    }
    
    //此时已得到一个完整的key表，将num表遍历一次，判断每一个数是否被覆盖，没被覆盖的数加入一个数组
    int cnt = 0; //处理空格
    int result[100] = {0};
    for (int i = 0; i < k; i++) {
        if (covered(num[i], key)) {
            continue;
        } else {
            result[cnt++] = num[i];
        }
    }
    
    //排序并输出
    for (int i = 0; i < cnt - 1; i++) {
        for (int j = 1; j < cnt - i; j++) {
            if (result[j] > result[j - 1]) {
                int tmp = result[j];
                result[j] = result[j - 1];
                result[j - 1] = tmp;
            }
        }
    }
    
    cout << result[0];
    for (int i = 1; i < cnt; i++) {
        cout << ' ' << result[i];
    }
    return 0;
}