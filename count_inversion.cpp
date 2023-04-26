#include <iostream>
using namespace std;

void count_inv(int arr[],int n){
    int count = 0;
    for(int i=0;i<n-1;i++){
        for (int j = i+1; j < n; j++)
        {
            if (arr[i]>arr[j])
            {
                count++;
            }
            
        }
        
    }
    cout<<"The inversion count is : "<< count;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int m=sizeof(arr)/sizeof(arr[0]);
    count_inv(arr,m);
    return 0;
}