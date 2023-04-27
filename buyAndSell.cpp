#include <iostream>
using namespace std;

int buyandsell(int arr[],int n){
    int buy=arr[0];
    int profit=0;
    for (int i = 0; i < n; i++)
    {
        if (buy>arr[i])
        {
            buy=arr[i];
        }
        else if (arr[i]-buy>profit)
            profit=arr[i]-buy;
    }
    return profit;
}



int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int m=sizeof(arr)/sizeof(arr[0]);
    int x=buyandsell(arr,m);
    cout<<x;
    return 0;
}