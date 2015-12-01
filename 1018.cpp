#include <iostream>
#include <map>

using namespace std;

int game(char a, char b)
{
	switch (a) {
	case 'C': 
		switch (b) {
		case 'C': return 0;
		case 'J': return 1;
		case 'B': return -1;
		}
	case 'J': 
		switch (b) {
		case 'C': return -1;
		case 'J': return 0;
		case 'B': return 1;
		}
	case 'B':
		switch (b) {
		case 'C': return 1;
		case 'J': return -1;
		case 'B': return 0;
		}
	default:
		break;
	}
	return 0;
}

int main()
{
	int n,t;
	cin >> n;
	t = n;
	int cnt_a = 0, cnt_b = 0;
	map<char, int> jia, yi;

	while (n--) {
		char a, b;
		cin >> a >> b;

		int result = game(a, b);

		if (result == 1) {
			cnt_a++;
			jia[a]++;
		}
		else if (result == -1) {
			cnt_b++;
			yi[b]++;
		}

	}
	printf("%d %d %d\n", cnt_a, t - cnt_a - cnt_b, cnt_b);
	printf("%d %d %d\n", cnt_b, t - cnt_a - cnt_b, cnt_a);

	auto win_a = jia.begin(), win_b = yi.begin();
	printf("%c %c\n", win_a->first, win_b->first);
	
	return 0;
}