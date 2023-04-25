#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string s;
    cin>>s;
    bool val=next_permutation(s.begin(),s.end());
    if(val==false){
        cout<<"No word possible";
    }
    else
    cout<<s;
        return 0;
}