#include<bits/stdc++.h>
using namespace std;

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
//using namespace _gnu_pbds;
//#define ordered_set tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update>


int main(){

    ordered_set s;                                      // WRONG CODE
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(6);

    for(auto it:s)cout<<it<<endl;



}

