#include<bits/stdc++.h>
using namespace std;
int main(){

    // map a key are :unique.
    // multimap key are : not unique.
    // key are unordered but same value's key are stay together.

    unordered_multimap<int,int>s;
    s.insert({ 1, 30});
    s.insert({1,34});
    s.insert({4,834});
    s.insert({3,422});

    s.insert({3,422});

    for(auto it: s)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }

    cout<<" the no of present the key 2 here is : "<<s.count(3)<<endl;




}
