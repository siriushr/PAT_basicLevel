#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    char name[n][11];
    char id[n][11];
    int grade[n];
    for(int i = 0; i < n; i++) {
        cin >> name[i] >> id[i] >> grade[i];
    }
    
    int max = 0, maxIndex = 0, min = grade[0], minIndex = 0;
    for (int i = 0; i < n; i++) { //找到最大值和最小值
        if (max < grade[i]) {
            max = grade[i];
            maxIndex = i;
        }
        if (min > grade[i]) {
            min = grade[i];
            minIndex = i;
        }
    }
    
    cout << name[maxIndex] << ' ' << id[maxIndex] << endl;
    cout << name[minIndex] << ' ' << id[minIndex] << endl;
    return 0;
}
