#include <iostream>
#include <vector>
using namespace std;

int maxProfit(int l,int p[],vector<int>cache){
    if(l==0){
        return 0;
    }
    if(cache[l-1]!=-1){
        return cache[l];
    }
    int maxx=INT_MIN;
    for (int i = 0; i < l; i++)
    {
        maxx=max(maxx,p[i]+maxProfit(l-i-1,p,cache));
    }
    
       cache[l-1]=maxx;
    return maxx;
}

int main(){
    int l=6;
    int p[]={1,5,8,9,10,14,17,20,24,30};
    vector<int> cache(l,-1);
    int x=maxProfit(l,p,cache);
    cout<<x;
    return 0;
}