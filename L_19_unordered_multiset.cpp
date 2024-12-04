#include<bits/stdc++.h>
using namespace std;
int main(){

   //value unique not.
   // not sorted.

   unordered_multiset<int>ums;
/*
   ums.insert(10);
   ums.insert(20);
   ums.insert(30);
   ums.insert(70);
   ums.insert(5);
   ums.insert(38);
*/

//   it is used to all same value together.

ums.insert(1);
   ums.insert(2);
   ums.insert(1);
   ums.insert(2);
   ums.insert(3);
   ums.insert(4);
   ums.insert( 3);
   ums.insert( 2);
   ums.insert(1);
   for(auto it: ums)  //  output: 2 2 2 1 1 1 3 3 4
   // here , 2 first so all 2 are together at first.
   // after 1 come, so all 1 are together.
   // after 3 come, so  all 3 are together.
   {
       cout<<it<< " ";  //output: 5 70 30 38 10 20.
   }cout<<endl;

    cout<<" the number of 3 are present is: "<< ums.count( 3)<<endl;


unordered_multiset<int>ums1={4,3,9,7,4,7,4,3};

for( auto it1:ums1)
{
    cout<<it1<< " ";  //7 7 9 3 3 4 4 4
}cout<<endl;


}
