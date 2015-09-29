#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	int cnt = 0;
	while (n != 1) {
		if (n % 2 == 1) {
			n = (3 * n + 1) / 2;
		} else {
			n /= 2;
		} 
		cnt++;
	}

	cout << cnt << endl;
	return 0;
}

/*
对任何一个自然数n，如果它是偶数，那么把它砍掉一半；
如果它是奇数，那么把(3n+1)砍掉一半。这样一直反复砍下去，最后一定在某一步得到n=1。

对给定的任一不超过1000的正整数n，简单地数一下，需要多少步（砍几下）才能得到n=1？

输入格式：每个测试输入包含1个测试用例，即给出自然数n的值。

输出格式：输出从n计算到1需要的步数。
*/