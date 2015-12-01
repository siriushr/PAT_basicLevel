#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	while (n != 6174) {
		int a[4], b[4], c[4];
		for (int i = 0; i < 4; i++) {
			a[i] = n % 10;
			n /= 10;
		}

		if (a[0] == a[1] && a[0] == a[2] && a[0] == a[3]) {
			printf("%d%d%d%d - %d%d%d%d = 0000", a[0], a[1], a[2], a[3], a[0], a[1], a[2], a[3], a[4]);
			printf("\n");
			break;
		}

		for (int i = 0; i < 4; i++) {
			b[i] = a[i];
			c[i] = a[i];
		}
		for (int i = 0; i < 3; i++)
			for (int j = 1; j < 4; j++) 
				//b数组降序排列
				if (b[j - 1] < b[j]) {
					int t = b[j];
					b[j] = b[j - 1];
					b[j - 1] = t;
				} //c数组升序排列
				else if (c[j - 1] > c[j]) {
					int t = c[j];
					c[j] = c[j - 1];
					c[j - 1] = t;
				}

		int num_b = 0, num_c = 0;
		num_b = b[0] * 1000 + b[1] * 100 + b[2] * 10 + b[3];
		num_c = c[0] * 1000 + c[1] * 100 + c[2] * 10 + c[3];
		
		n = num_b - num_c;
		for (int i = 0; i < 4; i++)
			printf("%d", b[i]);
		printf(" - ");
		for (int i = 0; i < 4; i++)
			printf("%d", c[i]);
		printf(" = ");

		if (n >= 1000)
			cout << n << endl;
		else if (n >= 100)
			cout << '0' << n << endl;
		else if (n >= 10)
			cout << "00" << n << endl;
		else
			cout << "000" << n << endl;

	}
	return 0;
}