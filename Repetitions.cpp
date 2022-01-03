#include <iostream>
#include <algorithm>
using namespace std;
 
int ft_max(int res, int count)
{
    int max = 1;
    if (res > count)
        max = res;
    else
        max = count;
    return (max);
}
 
int main()
{
    int     count;
    int     res;
    int     i;
    string  input;
 
    cin >> input;
    count = 1;
    res = 1;
    for (i = 1; i < input.length(); i++)
    {
        if (input[i] == input[i - 1])
            count++;
        else
            count = 1;
        res = ft_max(res, count);
    }
    cout << res;
    return 0;
}