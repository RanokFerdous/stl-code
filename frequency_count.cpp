#include<bits/stdc++.h>
using namespace std;

#define optimize()    ios_base::sync_with_stdio(0); cin.tie(0);


int cnt[1000123];
int main()
{
    optimize();

    vector<int>v={2,2,3,4,2};
    for( auto x:v){
        cnt[x]++;
    }

    //c[2]=3;
    //c[3]=1;
    //c[4]=1;
    //c[5]=0;

    for(int i=0;i<1000123;i++){
        if(cnt[i]){
            cout<<i<<" "<<cnt[i]<<endl;
        }
    }




}
/* output:
2 3
3 1
4 1
*/
