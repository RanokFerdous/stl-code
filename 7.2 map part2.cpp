#include<bits/stdc++.h>
using namespace std;
int main(){

    map<int,int>mp;

    mp.insert({1,10});

    mp.insert({2,20});

    mp.insert({3,30});

    mp[4]=40;

   // mp.at(5)=50;  this line is wrong.

    for(auto it :mp){

        cout<<it.first<<" "<<it.second<<endl;
    }cout<<endl;

    //-------------------erase ------------

    mp.erase(1);  // delete the value of 10 and index 1.

    int cnt=mp.count(3);
   cout<<"The count of index 3 is(if present ans: 1 and not present ans:0):  "<<cnt<<endl;

   //------------find---------
   auto it1=mp.find(2);

   if(it1!=mp.end())cout<<" find"<<endl;

   else   cout<<"Not find"<<endl;





