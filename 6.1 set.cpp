#include<bits/stdc++.h>
using namespace std;
int main(){

              // set store the unique value . ***store value ascending order by default.
    set<int>s;  // set<int,greater<int>>s;   ********store value decending oreder a.  4 3 2 1
    s.insert(1);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(2);

    s.insert(2);// set can not store the duplicate value.

    cout<<" size of the set is :"<<s.size()<<endl;

    cout<<" the maximum element which we can store is:"<<s.max_size()<<endl;

   set<int>::iterator it;

     cout<<"print the set value  :";
    for(it=s.begin(); it!=s.end();it++){

        cout<<*it<<" ";
    } cout<<endl;


    set<int,greater<int>>s1={1,4,3,5,6,2};   //decending order a value will be store here.  5  4  3 2 1

    cout<<" the decending order value is: ";
    for(auto it:s1){
        cout<<it<<" ";
    }cout<<endl;

  // ------------------------------erase--------------advance----------------.

   set<int>s2={1,4,3,5,6,2,3};

  // s2.erase(2);

   // or  anothere mathod for erase

   set<int>::iterator it2;

   it2=s2.begin();

   advance (it2,4);  //it indicate the s2[4]=5;

   s2.erase(it2);

   for(auto it2:s2){
    cout<<it2<<" ";  //1 2 3 4 6.
   }



   //-------------------------------find()  -----------count---------

   set<int> s3={4,5,7,6,2,9};

   set<int>::iterator it3;
   it3=s3.find(2);

   if(it3!=s3.end()){

       cout<<" find"<<endl;

      }else cout<<" Not find";


      // count

      cout<<s3.count(2)<<endl;  // answer will be 1 or 0.




}
