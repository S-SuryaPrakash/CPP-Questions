//Using the Standard Template Library

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     int arr[n];
//     cin>>n;
//     for (int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     reverse(arr,arr+n);
//     for (int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }



//Naive Approach
#include <iostream>
using namespace std;

void reverse(int arr[],int start,int end){
    while (start<end)
    {
        int temp;
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}
void print(int arr[],int n){
    for (int i = 0; i <n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}

int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int m=sizeof(arr)/sizeof(arr[0]);
    reverse(arr,0,n-1);
    print(arr,n);
    return 0;
}

