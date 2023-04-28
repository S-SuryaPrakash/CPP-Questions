#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int red=0;
int blue=1;
int green=2;

int bottomup(vector<vector<int>>cost){
    
    int dp[4][3];
    int n=cost[0].size();
    if(n==0){
        return 0;
    }
    for (int j = 0; j < n; j++)
    {
        dp[0][j]=0;
    }
    
    for (int i = 1; i <= n; i++)
    {
        dp[i][red]=cost[i-1][red]+ min(dp[i-1][blue],dp[i-1][green]);
        dp[i][blue]=cost[i-1][blue]+ min(dp[i-1][red],dp[i-1][green]);
        dp[i][green]=cost[i-1][green]+ min(dp[i-1][blue],dp[i-1][red]);
    }
        return min(dp[3][red],min(dp[3][green],dp[3][blue]));
    
}



int main(){

    vector<vector<int>> cost={
        {17,2,17},{16,16,5},{14,3,19}
    };
    int x=bottomup(cost);
    cout<<x;
    return 0;
}