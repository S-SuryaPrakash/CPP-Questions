#include <iostream>
using namespace std;

int maxProfit(int i,int arr[]){
    if(i<0){
    return 0;
    }
    if(i==0){
    return arr[0];
    }
    return max(arr[i]+maxProfit(i-2,arr),maxProfit(i-1,arr));
}



int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int size=sizeof(arr)/sizeof(int);
    cout<<size<<endl;
    int x=maxProfit(size-1,arr);
    cout<<x;
    return 0;
}