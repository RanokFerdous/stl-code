
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

    cout<<mp[1]<<endl;  //10

    cout<<mp.at(1)<<endl;//10


    //---------another method for printing the value

    map<int,int>::iterator it1;

    for(it1=mp.begin();it1!=mp.end();it1++){

        cout<<it1->first <<" "<<it1->second<<endl;

    }cout<<endl;


     map<int,string >mp1;

    mp1.insert({1,"abba"});

    mp1.insert({2,"baba"});

    mp1.insert({3,"mammi"});

    mp1[4]="nani";

    for(auto val:mp1){
        cout<<val.first<<" "<<val.second<<" ";
    }cout<<endl;



     map<string,int  >mp2;

    mp2.insert({"abba",1});

    mp2.insert({"baba",2});

    mp2.insert({"mammi",3});

    mp2["nani"]=4;

    for(auto val1:mp2){
        cout<<val1.first<<" "<<val1.second<<" "<<endl;
    }cout<<endl;









}
