#include <iostream>
using namespace std;
int main()
{
    int draw = 0;
    int jia[3] = {0}, yi[3] = {0};
    char cs[] = {'B', 'C','J'};
    
    int n;
    cin >> n;
    while (n--) {
        char a, b;
        cin >> a >> b;
        
        if (a == b)
            ++draw;
        else if (a == 'B' && b == 'C')
            ++jia[0];
        else if (a == 'B' && b == 'J')
            ++yi[2];
        else if (a == 'C' && b == 'J')
            ++jia[1];
        else if (a == 'C' && b == 'B')
            ++yi[0];
        else if (a == 'J' && b == 'B')
            ++jia[2];
        else if (a == 'J' && b == 'C')
            ++yi[1];
    }
    
    int sumJia = jia[0] + jia[1] + jia[2], sumYi = yi[0] + yi[1] + yi[2];
    printf("%d %d %d\n", sumJia, draw, sumYi);
    printf("%d %d %d\n", sumYi, draw, sumJia);
    
    int maxIndex1 = 0, maxIndex2 = 0;
    for (int i = 0; i < 3; ++i)
        if (jia[i] == jia[maxIndex1] && cs[i] < cs[maxIndex1])
            maxIndex1 = i;
        else if (jia[i] > jia[maxIndex1])
            maxIndex1 = i;
    
    for (int i = 0; i < 3; ++i)
        if (yi[i] == yi[maxIndex2] && cs[i] < cs[maxIndex2])
            maxIndex2 = i;
        else if (yi[i] > yi[maxIndex2])
            maxIndex2 = i;
    
    printf("%c %c\n", cs[maxIndex1], cs[maxIndex2]);
    return 0;
}