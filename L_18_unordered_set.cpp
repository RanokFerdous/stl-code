#include<bits/stdc++.h>
using namespace std;

int main()
{
    /*
    // properties of unordered set:
    // what can in do in unordered set
    1. bucket_count();  ==>>  how many bucket created in an array
    2.bucket(); ===>>
    cout<<" the no 23 is present is the bucket no = "<<un.bucket(23)

    3.bucket_size();
    4. no order maintain this.
    5.value is unique

    */

    unordered_set<int> un;
    un.insert(32);
    un.insert( 23);
    un.insert( 323);
    un.insert(23);

    for(auto it:un)
    {
        cout<<it<<" ";
    }cout<<endl;

    unordered_set<int>:: iterator it1;

    for( it1=un.begin();it1!=un.end();it1++)
    {
        cout<<*it1<<" ";//323 32 23
    }cout<<endl;


    int cnt=un.count(23);
    cout<<" the appearence of 23 is"<< cnt<<endl;  // if present 1 otherwise 0


    // erase
    un.erase(23);   // all 23 is deleted
    for( auto ix: un)
    {
        cout<<ix<< " ";
    }cout<<endl;

    // find

    auto it5=un.find( 23);

    if( it5!=un.end())
    {
        cout<<" find"<<endl;

    }else cout<< "not find"<<endl;



    //   * *********how many bucket is created here

    cout<<" the total no of bucket created by here is: "<<un.bucket_count()<<endl;


    cout<<" the no 23 is present is the bucket no = "<<un.bucket(23)<<endl;//2

    //   ********how many value store in bucket x

    unordered_set<int>us,us2;

    us.insert( 2);
    us.insert( 32);
    us.insert( 42);
    us.insert( 423);

    cout<<" how many element are in bucket no 2 is  = "<<us.bucket_size( 2)<<endl;  //1

    cout<<" how many element are in bucket no 0 is  = "<<us.bucket_size( 0)<<endl;//1

    cout<<" how many element are in bucket no 3 is  = "<<us.bucket_size( 3)<<endl;
}
