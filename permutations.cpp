#include <iostream>
using namespace std;
int main() {
    int n;
    int i;
    cin >> n;

    if (n == 1)
        cout << 1;
    else if (n < 4 && n > 1)
        cout << "NO SOLUTION";
    else
    {
        i = n;
        while (i > 0)
        {
            if (i % 2 != 0)
                cout << i << " ";
            i--;
        }
        i = n;
        while (i > 0)
        {
            if (i % 2 == 0)
                cout << i << " ";
            i--;
        }
    }
    return 0;
}