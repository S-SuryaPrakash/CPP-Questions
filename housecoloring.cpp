#include <iostream>
#include <vector>
using namespace std;
const int red=0;
const int blue=1;
const int green=2;

int mincost(vector<vector<int>>arr,int i, int color){
    if(i==arr[0].size()){
    return 0;
    }
    switch (color)
    {
    case red:
    {
        int costblue=mincost(arr,i+1,blue);
        int costgreen=mincost(arr,i+1,green);
        return arr[i][red] + min(costblue,costgreen);
    }
    case blue:
    {
        int costred=mincost(arr,i+1,red);
        int costgreen=mincost(arr,i+1,green);
        return arr[i][blue] + min(costred,costgreen);
    }
    case green:
    {
        int costblue=mincost(arr,i+1,blue);
        int costred=mincost(arr,i+1,red);
        return arr[i][green] + min(costblue,costred); 
    }   
    }
    return 0;
}


int main(){
    vector <vector<int>> arr{
        {17,2,17},{16,16,5},{14,3,9}
    };

    int costred=mincost(arr,0,red);
    int costblue=mincost(arr,0,blue);
    int costgreen=mincost(arr,0,green);
        
    cout<<min(costred,min(costblue,costgreen));
    return 0;
}