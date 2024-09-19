//https://codeforces.com/problemset/problem/263/A
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> v(5, vector<int>(5));

    int x,y;

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>v[i][j];
            if(v[i][j]==1)
            {
                x = i;
                y = j;
            }
        }
    }

    int check1 = abs(3-(x+1));
    int check2 = abs(3-(y+1));
    int ans = 0;
    if(check1!=3)ans+=check1;
    if(check2!=3)ans+=check2;

    cout<<ans<<endl;
}
