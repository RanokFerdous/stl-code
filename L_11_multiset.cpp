#include<bits/stdc++.h>
using namespace std;

int main()
{
    /*
     multiset<int> ms; // ascending order
    // multiset<int, greater<int>>ms; // descending order

     // multiset can store duplicate value

     ms.insert( 1);
     ms.insert(1);
     ms.insert(5);

     ms.insert( 2);
     ms.insert(2);
     ms.insert( 3);

     for( auto it1:ms)
     {
         cout<<it1<< " ";
     }cout<<endl;

    multiset<int>:: iterator it;

    for( it=ms.begin();it!=ms.end();it++)
    {
        cout<<*it<< " ";  //1 1 2 2 3 5
    }cout<<endl;

    /*

    //___________----------erase ----------

    ms.erase( 2);// all 2 value will be deleted

    //   --------- delete index wise value using it;

    auto it4= ms.begin();

    ms.erase(it4); // delete the o index value

    auto it1= ms.begin();

    advance ( it1, 2);

    ms.erase( it1);

    for( auto x: ms)
    {
        cout<<x<<" ";
    }cout<<endl;

    */


    //***********find
    multiset<int>ms={3,5,6,8,5,3,6};

    auto it=ms.find(3 );

    if( it==ms.end()){
        cout<<"NOtfind"<<endl;

    }else cout<<"Find"<<endl;

      // count

      cout<<" count no of 5 is in array are : " << " "<< ms.count( 5)<<endl;


      auto it5=ms.lower_bound( 3);  //3
      cout<<*it5<<" ";

      auto it6=ms.lower_bound( 4);
      cout<<*it6<<endl;  //5

      auto it7 = ms.lower_bound( 324);
      cout<<*it7<<endl;  //7  becasue 324 not included here . so anser is : ( big value+ 1)= ( 6+1) =7 ;







}
