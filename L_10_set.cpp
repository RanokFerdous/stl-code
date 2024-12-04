#include<bits/stdc++.h>
using namespace std;

int main()
{
    /*
    // the topic are:
    1.insert(), 2. size() , 3. max_size();
    4.set declaration
    5. begin(), end(),
    6. empty();
    7. erase();
    8.clear();
    9. find();
    10.cout();
    11. lower_bound();
    12.upper_bound();
    13. empalce();
    14. swap();
    15.operator '='




     //   Advantage of set use:
     1. store unique value.
     2. sort () the value automaitcally and store it sort wise.

     3.we have to use iterator for access in the set  .  same as set .

      */
/*

      set<int> s={ 1,5,3,6,34};
      s.insert( 100);
      s.insert(38);

      cout<<" the size of the set is " <<s.size()<<endl;

    for( auto x:s)
    {
        cout<<x<<" ";
    }cout<<endl;


    set<int>:: iterator it;

    for( it= s.begin();it!=s.end();it++)
    {
        cout<<*it<<" ";     //********1,3,5,6,34,38,100
    }cout<<endl;


*/

/*           Erase value



    set<int,greater<int>>s1={4 ,74 ,74,8,2,5};            // store the value indecreaing order.

    for( auto it:s1)
    {
        cout<<it<<" ";  //74 8 5 4 2
    }
    cout<<endl;

    //  for delete specific value

    s1.erase( 8);

    set<int>::iterator it;

    it=s1.begin();
    advance( it, 3);

    s1.erase( it); // delete s[3] index value.

    for( auto i: s1)
    {
        cout<<i<<" ";  //74 5 4
    }cout<<endl;

    */
    /*
    //-----------------------  find( ) ----------



    set<int,greater<int>>s2={ 1,3,2,2,6,4};

    set<int>::iterator it;

    it=s2.find(4);

    if( it!=s2.end())
    {
        cout<<" find"<<" "<<*it<<endl;    // here *it give the ans: ( the index of 4 which s2[3] means 3 and add 1 .ans= ( 3+1=4).

    }else {
    cout<<"NOT find"<<endl;
    }


    // cout( );

    cout<<s2.cout(2)<<endl;  // ans: 1 or 0

    */
    /*



   // lower_bound() and upper_bound()

    set<int>s= { 1,2,3,4,6,7};
    for( auto it:s)
    {
        cout<<it<<" ";
    }cout<<endl;

    set<int>::iterator it;

    it= s.lower_bound( 2);
    cout<<*it<< endl; //2
    it= s.lower_bound( 5);
    cout<<*it<<endl;//6

    it=s.lower_bound( 43);
    if( it==s.end())
    {
        cout<<" the element is larger than the greater element"<<endl;
    }else cout<<" the lower bound of 43 is  "<<*it<<endl;



    //upper bound indicate immidiate big value . if not present big value then

    it=s.upper_bound( 2); // 3


    it=s.upper_bound( 7);

   // cout<<it<<" ":
    it=s. upper_bound( 34);




    */

   // emplace( ) and insert ( ) are same.

    set<int> s={12,4,5,6,7,8};

    s.emplace( 100);
    s.emplace(200);

    for( auto it:s)
    {
        cout<<it<<" ";
    }cout<<endl;

    set<int>s2={1,36,4,7,45,4};

    s.swap(s2);

    for( auto x: s2)
    {
        cout<<x<<" ";
    }cout<<endl;

    // ********operator uses

    set<int> s5={1,2,5,6};
    set<int>s1;
    s1=s5;


    for( auto x: s1)
    {
        cout<<x<<" ";
    }cout<<endl;




}
