
//--------list topic ---

#include<bits/stdc++.h>
using namespace std;
int main(){

    list<int>li;
    li.push_back(1);
    li.push_back(2);
    li.push_back(3);
    li.push_back(4);
    li.push_back(5);
    li.push_back(6);
    li.push_back(7);


        list<int>:: iterator it;

        for( it=li.begin();it!=li.end();it++){

            cout<<*it<<" ";
        }cout<<endl;

        for(auto it:li){
            cout<<it<<" ";  //here can't using *  with the iterator.
        }cout<<endl;
   //< ------------------------------------------------------------------------------>>

  // li.push_front(943);
   //li.push_front(392);

   cout<<"After using push_front :"<<li.front()<<" "<<li.front()+1<<" "<<li.front()+2<<endl; // 393 394 395

   cout<<"after using push_front the updaed list are:"<<endl;

   for(auto it:li){
            cout<<it<<" ";  //here can't using *  with the iterator.
        }cout<<endl;

        cout<<"front value is:"<<li.front()<<endl;

        //<------------------------------------------------------------------------------//


       // li.pop_front();// front value will be deleted.
        //li.pop_back();//  last valuse will be deleted.

      li.insert( li.begin(),2333);
      li.insert(li.begin(),323);
    //li.insert(li.begin()+3, 3432);  //-- NOTE: ---incorrect: because in the linklist we can't access in the middle .we just access the 1st and last value.
                                // in the linklist .

    for(auto it:li){
            cout<<it<<" ";  //here can't using *  with the iterator.
        }cout<<endl;


    list<int>li1;
    li1.push_back(1);
    li1.push_back(2);
    li1.push_back(3);
   li1.push_back(4);
    li1.push_back(5);
    li1.push_back(6);
    li1.push_back(7);


        li<int>:: iterator it;

        it=li1.begin();

        advance(it,3);// now it indicate the 3rd index.

        li1.insert(it, 43);// store 43 in the index 3. li[3]=43;

         for(auto it:li1){
            cout<<it<<" ";  //here can't using *  with the iterator.
        }cout<<endl;














}



