#include <iostream>
using namespace std;

int maxProfit(int l, int arr[])
{
    if (l == 0)
    {
        return 0;
    }
    int maxx = INT_MIN;
    for (int i = 0; i < l; i++)
    {
        maxx = max(maxx, arr[i] + maxProfit(l - i - 1, arr));
    }
    return maxx;
}

int main()
{
    int l = 6;
    int arr[6] = {1, 5, 8, 9, 10, 14};
    int x = maxProfit(l, arr);
    cout<<x;
    return 0;
}