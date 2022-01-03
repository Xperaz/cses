#include <iostream>
using namespace std;
 
int main(void)
{
    long long int n, m, sum = 0, sum1 = 0;
    cin >> n;
    sum = ((n * (n + 1)) / 2);
    for (int j = 1; j < n; j++)
    {
        cin >> m;
        sum1 += m;
    }
    cout << (sum - sum1);
}