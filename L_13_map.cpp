#include<bits/stdc++.h>
using namespace std;

int main()
{
    /*
    // topic: 1. Map declaration
    2.insert( )
    3.at(), operator '[]'
    4. size()
    5. begin() , end()
    6. max_size()
    7.empty()
    8.erase()
    9.clear()
    10.count()
    11.find()
    12.upper_bound()
    13.lower_bound()
    14. operator '='
    15. swap()
    */
    /*
    // map declaration   take <int,int>

    map<int, int> mp;
    mp[0]=32;
    mp.insert({ 1,43});
    mp.insert( { 2,432});
    mp.insert({ 3,533});

    mp[4]=535;
    mp[5]=943;

    cout<<mp[5]<<endl;
    mp[5]+=424;

    cout<<"After increasing the 5 th index value is"<<mp[5]<<endl;

    cout<<" the 0 th index value is "<<mp.at(0)<<endl;

    for( auto it:mp)
    {
        cout<< it.first<< " "<<it.second<<endl;

    }cout<<endl;

    // print using iterator

    map<int,int>:: iterator it;

    for( it=mp.begin();it!=mp.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }cout<<endl;

        */
/*

      map<int, string> mp;

      mp.insert({0, "abbu"});
      mp.insert({ 1, "ammu"});
      mp.insert({ 2, "sister"});
      mp.insert({ 3,"brother"});

      mp.insert({ 4, "grandMother"});

    for( auto x: mp)
    {
        cout<<x.first<<" "<<x.second<<endl;
    }



    map< string, int> mp1;

    mp1["aaa"]= 32;
    mp1["bbb"]= 432;
    mp1[" apan vai"]=100;
    mp1[ " ranok vai"]= 423;

    for( auto it: mp1)
    {
        cout<< it.first<< " "<<it.second<<endl;
    }

    cout<<" the aaa string value is "<<mp1["aaa"]<<endl;  //32



    */

    /* erase and find() keyword


    // erase value

    map<int, int> mp;
    mp[0]=10;
    mp[1]=20;
    mp[3]= 30;
    mp[4]= 40;

    for( auto it: mp)
    {
        cout<<it.first<< " "<<it.second<<endl;
    }

    mp.erase( 1) ; //delete index 1 value and index.

    int cnt= mp.count( 3);
    cout<<cnt<<endl;  //  if 3 index present then 1 otherswise 0 .
    for( auto it: mp)
    {
        cout<<it.first<< " "<<it.second<<endl;
    }


       //*********find()

     auto it= mp.find(4);

     if( it!=mp.end())
     {
         cout<< " find  or the nth index is present" <<endl;
     }
     else cout<< " not find or the nth index is not present here"<<endl;



    */

    /*
     map<int, int> mp;
    mp[0]=10;
    mp[1]=20;
    mp[3]= 30;
    mp[4]= 40;

   // auto it= mp.lower_bound( 2);

   // cout<<(*it).first<<" "<<(*it).second<<endl;  // 3,30

    //auto it=mp.upper_bound(2);
   // cout<<(*it).first<<" "<<(*it).second<<endl; //3 30

     // auto it=mp.upper_bound(3);
   // cout<<(*it).first<<" "<<(*it).second<<endl; //4 40

      auto it=mp.upper_bound(57);  //if the given value is >=4 then output: 4 0

    cout<<(*it).first<<" "<<(*it).second<<endl; // 4 0    ==( last_index, 0);

        */
        /*

        map<int,int> mp,mp1;

        mp[0]= 23;
        mp[1]=32;
        mp[2]=42;

        mp1[0]=34;
        mp1[1]=234;

        mp.swap( mp1);

        for( auto it: mp)
        {
            cout<<it.first<<" "<<it.second;
        }cout<<endl;


        */
        // problem:
       // input: nums=[ 2,2,3,2];
       // output: 3
       // input: [ 0,1,0,1,0,1,99];
       // output: 99
/*

        vector<int>v;
        int x;
        while( cin>>x)
        {
            v.push_back( x);
        }

        int ans;

        map<int,int>mp;

        for( int i=0;i<v.size();i++)
        {
            int y= v[i];
            mp[y]++;
        }

        for(auto it:mp)
        {
            int x=it.first;
            int y=it.second;

            if( y!=3)
            {
                cout<<x<<endl; break;
            }
        }


        */


    //




















}
