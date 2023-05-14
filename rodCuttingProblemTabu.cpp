#include <iostream>
#include <vector>
using namespace std;

int maxProfit(int p[],int index,int n){
    if(index==0){
        return p[0]*n;
    }
    int notCut=maxProfit(p,index-1,n);
    int cut=INT_MIN;
    int rod_length=index+1;
    if (rod_length<=n)
    {
        cut=p[index]+maxProfit(p,index,n-1);
    }
    return max(cut,notCut);
    
}



int main(){
    int l=6;
    int p[]={1,5,8,9,10,14,17,20,24,30};
    int x=maxProfit(p,l-1,l);
    cout<<x;

    return 0;
}