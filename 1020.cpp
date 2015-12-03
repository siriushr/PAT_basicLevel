#include <iostream>
#include <algorithm>

using namespace std;

struct Cake
{
    double num;
    double total;
    double price;
    bool operator < (const Cake a) const {
        return (this->price) > (a.price);
    }
};

int main()
{
    int n, need;
    cin >> n >> need;
    Cake data[n];
    for (int i = 0; i < n; ++i)
        cin >> data[i].num;
    for (int i = 0; i < n; ++i)
        cin >> data[i].total;
    for (int i = 0; i < n; ++i)
        data[i].price = data[i].total / data[i].num;
    
    sort(data, data+n);
    
    double sum = 0;
    int i = 0;
    while (need) {
        if (need >= data[i].num) {
            sum += data[i].total;
            need -= data[i].num;
        } else {
            sum += data[i].price * need;
            need = 0;
        }
        ++i;
    }
    
    printf("%.2f", sum);
    return 0;
}