#include<bits/stdc++.h>
using namespace std;
int main(){

    // here, key are = unique.
    // not maintain order.
    // unordered_map contain == value and key
    //unorderd set contain ==  only key.

    //time complesity :
    //  unordered_map =  O (1)
    //map  O (log n)


    unordered_map<int,int> ump;

    ump.insert({1,10});
    ump.insert({2,20});

    ump[5]=50;
    ump[4]=40;
    ump[3]=30;

    ump[5]=69;

    for(auto it:ump)
    {
        cout<<it.first <<" "<<it .second<<endl; //  unorder so not maintain the order.
    }cout<<endl<<endl;


    for( auto it1=ump.begin();it1!=ump.end();it1++)
    {
        cout<<(*it1).first<<" "<<(*it1).second<<endl;
    }



    //bucket_count()

    cout<< " the no of bucket are present here is:"<<ump.bucket_count()<<endl;

    // bucket(3) ;

    cout<<" the place where the value are present or the value present at bucket not : "<<ump.bucket(2)<<endl;

    //
    cout<<" how many value can store on bucket 5 is " <<ump.bucket(5)<<endl;

    cout<<" how many times are present the key is ( presnt or not . if present ans=1;else ans=0) : "<<ump.count( 5)<<endl;  //



}
