#include <iostream>
using namespace std;

int maxProfit(int arr[],int i,int cache[]){
    if(i<0){
        return 0;
    }
    if(i==0){
        return 0;
    }
    if(cache[i] !=-1){
        return cache[i];
    }
    cache[i]=max(arr[i]+maxProfit(arr,i-2,cache),maxProfit(arr,i-1,cache));
    return cache[i];
}




int main(){
    int n;
    cin>>n;
    int arr[n];
    int cache[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        cache[i]=-1;
    }

    int size=sizeof(arr)/sizeof(int);

    int x=maxProfit(arr,size-1,cache);
    cout<<x;
    return 0;
}