#include<bits/stdc++.h>
using namespace std;

int main()
{
    // MULTIMAP
    /*
     1.we can not update value here.
     2.we can use same key multiple time.
     3. can not use mp[1] =132; this system can not use here .
     4. mp.erase( 1) ; // all 1 index value will be deleted.

     */

     multimap<int,int>mp;

     mp.insert({1,10});
     mp.insert({4,30});
     mp.insert({3,30});

     mp.insert( {6,30});

     mp.insert({2,93});


     for(auto it:mp)
     {
         cout<<it.first<< " "<<it.second<<endl;
     }cout<<endl;

     multimap<int,int>:: iterator it1,it2,it3   ;

     for(auto it1=mp.begin();it1!=mp.end();it1++)
     {
         cout<<(*it1).first<< " " <<(*it1).second<<endl;
     }cout<<endl;




}
