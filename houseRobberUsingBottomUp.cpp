#include <iostream>
using namespace std;

int maxProfit(int arr[], int i)
{
    int dp[6];
    // dp[0] = 0;
    dp[1] = arr[0];
    for (int j = 2; j <= 5; j++)
    {
        dp[j] = max(arr[j - 1] + dp[j - 2], dp[j - 1]);
    }
    return dp[i];
}

int main()
{
    int n = 5;
    int arr[5];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int size = sizeof(arr) / sizeof(int);
    int x = maxProfit(arr, size);
    cout << "ans "<<x;
    return 0;
}