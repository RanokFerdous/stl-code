// C++ program to demonstrate the
// ordered set in GNU C++
#include <iostream>
using namespace std;

// Header files, namespaces,
// macros as defined above
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>



// Driver program to test above functions

    /*
    // *********advantage .
    two more work can be done by using orderedset

    1.order_of_key(k);  ===>>  count the frequency of any value

    2.find_by_order(k);   === > find the value of any index in this array.

    */
    int main()
{
    ordered_set s;

    s.insert( 1);
    s.insert( 2);
    s.insert( 3);

    s.insert(30);
    s.insert( 24);
    s.insert( 3);

    for(auto it:s )
        {
            cout<<it<<" ";  //1 2 3 24 30
        }cout<<endl;


  //  *******************frequency count technique ********
    int ans= s.order_of_key(3);
    cout<<" the number of 3 has here: "<<ans<<endl; //2

     //    find the value of any index

     auto it1=s.find_by_order(1);
     cout<<"the first index value is "<<*it1<<endl; //2







}


