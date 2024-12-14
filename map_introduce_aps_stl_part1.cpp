#include<bits/stdc++.h>
using namespace std;

#define optimize()    ios_base::sync_with_stdio(0); cin.tie(0);

/*
int main()
{
    vector<long long>v={ 10102213131321,12313141131141,31241414,1,1,1};

    map<long long, int> cnt;

    for( auto u:v)cnt[u]++;

    for( auto u:cnt){
        cout<<u.first<<" "<<u.second<<endl;
    }
}
/* output:
1 3
31241414 1
10102213131321 1
12313141131141 1
*/

int main()
{
    map<string,int>id;  //  MAP SORT THE INDEX  word

    id["sharier"]= 2;// log2(n);
    id["momo"]= 3;
    id["prety"]=42;
    id["prety"]=123;

    for( auto u:id)cout<<u.first<<" "<<u.second<<endl;
    /*    *********AUTO MATIC SORTED VALUE IN MAP*******.

momo 3
prety 123
sharier 2
*/


    map<int,string>name;

    name[1]="rana";
    name[2]="xin";
    name[3]="panisa"; //log2(n)

    // for n time insert T.C= n* log2(n).

    cout<<name[2]<<endl;

   // unique a vector using map

   map<int,bool>vis;
   vector<int>v1={2,2,1,1,3};

   for( auto u:v1)vis[u]=1;   //  n* log2(n)

   for( auto u:vis)cout<<u.first<<" "<<u.second<<endl;

  //1 1
//2 1
//3 1

    //take input;

    map<string,int>id3;
    int n;
    cin>>n;
    for( int i=0;i<n;i++)
    {
        string s;
        int d;
        cin>>s>>d;

        id3[s]=d;

    }

    for (auto u:id3 )
    {
        cout<<u.first<<" "<<u.second<<endl;
    }






}

/*

#include<bits/stdc++.h>
using namespace std;

#define optimize()    ios_base::sync_with_stdio(0); cin.tie(0);

int main()
{

    map<string,int>id;
    id["sharier"]=1;
    id["momo"]=3;
    id["rana"]=4;
    id["prity"]=9;

    cout<<id["sharier"]<<endl;

    map<string,string>gender;

    gender["sharier"]="male";
    gender["momo"]="female";
    cout<<gender["sharier"]<<endl;

    map<string,vector<int>>marks;

    marks["sharier"].push_back(10);
    marks["sharier"].push_back(20);
    marks["sharier"].push_back(30);

    for(auto x:marks["sharier"])
    {
        cout<<x<<" ";
    }

    cout<<endl;

    map<string,map<string,int>>mp;

    mp["sharier"]["math"]=100;
    mp["sharier"]["english"]=90;
    mp["sharier"]["bangla"]=80;

    cout<<mp["sharier"]["math"]<<endl;

    map<pair<int,int>,string>mp1;

    mp1[{5,6}]= "abc";
    mp1[{7,8}]="abc";
    mp1[ {5,6}]= "abc"; // replace with mp[{ 5,6}] .

    cout<<mp1[{5,6}]<<endl;

    map<int,int>mp2;

    mp2[1]=10;
    mp2[2]=20;
    mp2[3]=30;

    for(auto x:mp2)
    {
        cout<<x.first<<" "<<x.second<<endl;
    }


}

*/
