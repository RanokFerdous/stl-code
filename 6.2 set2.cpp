

// TOPIC : LOWER BOUND     AND   UPPPER BOUND  SELECT.

#include<bits/stdc++.h>
using namespace std;
int main(){

    set<int>s={1,2,4,5,6,7,9};

    set<int>:: iterator it1,it2,it3,it4,it5,it6;

    it1=s.lower_bound(2);
     it2=s.lower_bound(3);
    it3=s.lower_bound(10);  //garbaze value give us
     cout<<*it1<<endl;

     cout<<*it2<<endl;
     //cout<<*it3<<endl;  garbaze value give us

     if(it3==s.end()){


        cout<<" The element is larger then the greater element" <<endl;
     }else cout<<" the lower bound of ___ is :"<<*it3<<endl;


     //------------------upper bound-----------


    it4=s.upper_bound(5);
     it5=s.upper_bound(2);

      it6=s.upper_bound(12);  //s.end ka point kora.

        cout<<*it4<<endl;
          cout<<*it5<<endl;
            cout<<*it6<<endl;//  end ka point kora thaka.



        //---------------we can use emplace

        set<int>s1={3,4,5};

        s1.emplace(1);
        s1.emplace(2);

        for(auto it7: s1){
            cout<<it7;
        }cout<<endl;

        //---------------swap------------

        set<int>s2={7,8,9};

        s1.swap(s2);

         for(auto it8: s1){
            cout<<it8<<" ";  // 7 8 9
        }cout<<endl;

    //------------------orerator---------

    set<int>s4;
    s4=s2;

     for(auto it8: s4){
            cout<<it8<<" ";  //1 2 3 4 5
        }cout<<endl;














}
