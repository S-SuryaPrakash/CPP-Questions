#include <iostream>
#include <vector>
using namespace std;
const int red=0;
const int blue=1;
const int green=2;

int mincost(vector<vector<int>>arr,int i, int color,int cache [][3]){
    if(i==arr[0].size()){
        return 0;
    }
    if(cache[i][color]!=-1){
        return cache[i][color];
    }
    switch (color)
    {
    case red:{
        int costBlue=mincost(arr,i+1,blue,cache);
        int costGreen=mincost(arr,i+1,green,cache);
        cache[i][color]=arr[i][red]+min(costBlue,costGreen);
        return cache[i][red];
    }
    case blue:{
        int costRed=mincost(arr,i+1,red,cache);
        int costGreen=mincost(arr,i+1,green,cache);
        cache[i][blue]=arr[i][blue]+min(costGreen,costRed);
        return cache[i][blue];
    }
    case green:{
        int costRed=mincost(arr,i+1,red,cache);
        int costBlue=mincost(arr,i+1,blue,cache);
        cache[i][green]=arr[i][green] + min(costRed,costBlue);
        return cache [i][green];
    }
}
return 0;
}


int main(){
vector <vector<int>> arr{
    {17,2,17},{16,16,5},{14,3,9}
};
int cache[3][3];
for (int i = 0; i < 3; i++)
{
    for (int j = 0; j < 3; j++)
    {
        cache[i][j]=-1;
    }
    
}

int costRed=mincost(arr,0,red,cache);
int costBlue=mincost(arr,0,blue,cache);
int costGreen=mincost(arr,0,green,cache);
cout<< min(costRed,min(costGreen,costBlue));
    return 0;
}