#include <iostream>
#include <vector>
using namespace std;
 
int main()
{
    long int n, i, j, res;
    res = 0;
    cin >> n;
    long int arr[n];
 
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    j = 1;
    while (j < n){
        if (arr[j] < arr[j - 1])
        {
            res += arr[j - 1] - arr[j];
            arr[j] += arr[j - 1] - arr[j];
        }
        j++;
    }
    std::cout << res << std::endl;
    
}