#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);

int main()
{
    //   **** TOPIC: INCREASING, decreasing ,, unique sort
    optimize();

    int n;
    cin>>n;
    vector<pair<string, string>>v(n);

    for( int i=0;i<n;i++)
    {
        cin>>v[i].first>>v[i].second;
    }
   // sort( v.begin(), v.end());

    sort( v.rbegin(), v.rend());
    // int sz=unique( v.begin(), v.end())-v.begin();

   // cout<<sz<<endl;

    for(auto u:v)
    {
       cout<<u.first<<" "<<u.second<<endl;
    }

}

