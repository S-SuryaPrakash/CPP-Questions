#include <iostream>
using namespace std;

int knapsack(int ws[],int vs[],int w,int j){
    if(w==0 || j==-1){
        return 0;
    }
    if (ws[j]<=w)
    {
        return max(vs[j]+knapsack(ws,vs,w-ws[j],j-1),knapsack(ws,vs,w,j-1));
    }
    else {
        return knapsack(ws,vs,w,j-1);
    }
}

int main(){
    int j;
    cin>>j;
    int ws[j],vs[j];
    for(int i=0;i<j;i++){
        cin>>ws[i]>>vs[i];
    }
    int w;
    cin>>w;
    int x=knapsack(ws,vs,w,j-1);
    cout<<x;
    return 0;
}