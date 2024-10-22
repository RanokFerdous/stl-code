#include<bits/stdc++.h>
using namespace std;
int main(){

    pair<int,int>p;
    p.first=10;
    p.second=20;

    cout<<p.first<<" "<<p.second<<endl;

    pair<int,char>p1(10,'a');
    cout<<p1.first<<" "<<p1.second<<endl;

    pair<int,int>p2(30,40),p3;

   p3=p2;

    cout<<p3.first<<" "<<p3.second<<endl;

    pair<int,int>p4(p2);  //that means p4==p2;  p2(30,40)

    cout<<"p4="<<p4.first<<" "<<p4.second<<endl;

    //or

    pair<int,int>p6;

    p6=make_pair(50,60);

    cout<<p6.first<<" "<<p6.second<<endl;

    // ------------------------------------swap the value----------

    pair<int,int>p7(30,40);

    pair<int,int>p8(80,90);

    p7.swap(p8);

    cout<<"the value of p7 after swaping "<<p7.first<<" "<<p7.second<<endl;

    if(p7==p8)cout<<"p7==p8  yes"<<endl;
    else cout<<"p7!=p8 No"<<endl<<endl;

    //----------------------

    /*pair<int,int>pa(30,30);
    pair<int,int>pb(30,30);

    if(pa>=pb)cout<<"yes"<<endl;  // yes
    else cout<<"No"<<endl;

    pair<int,int>pa(40,20);
    pair<int,int>pb(30,30);

    if(pa>=pb)cout<<"yes"<<endl;  //yes
    else cout<<"No"<<endl;



     pair<int,int>pa(10,40);
    pair<int,int>pb(20,30);

    if(pa>=pb)cout<<"yes"<<endl;
    else cout<<"No"<<endl;  //no  becaues 1st pair is 10<20



     pair<int,int>pa(20,40);
    pair<int,int>pb(20,30);

    if(pa>=pb)cout<<"yes"<<endl;  //yes
    else cout<<"No"<<endl;
       */

         pair<int,int>pa(20,40);
    pair<int,int>pb(20,650);

    if(pa>=pb)cout<<"yes"<<endl;
    else cout<<"No"<<endl;  //no

    cout<<  "FINISH THE PAIR LEARNING HERE................"<<endl;





}
