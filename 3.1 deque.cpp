#include<bits/stdc++.h>
using namespace std;
int main(){

    deque<int>dq;
    dq.push_back(1);
    dq.push_back(2);
    dq.push_back(3);
    dq.push_back(4);
    dq.push_back(5);

    for(int i=0;i<dq.size();i++){

    cout<<dq[i]<<" ";
    } cout<<endl;

    //-----------------------FORNT  ----------BACK------------  pop_front---------------pop_back----------//

    cout<<"fornt value is:"<<dq.front ();

    cout<<endl<< "the back value is:"<<dq.back()<<endl;

   // dq.pop_front();

   // dq.pop_back();

   // for(auto it:dq){
   //     cout<<it<<" ";  //2 3 4
   // }cout<<endl;


   // ------------------erase ( for fixed value erase we can use the iterator ) -------------range er vitor a erase kora-----------

   //
    deque<int>::iterator it,it1;  //______IMORTANT ::  MUST BE USED.

    it=dq.begin()+2;

    dq.erase(it);


   for(auto it:dq){
      cout<<it<<" ";  //1 2  4 5
 }cout<<endl;


  it=dq.begin();

  it1=dq.begin()+2;

  dq.erase( it,it1);

  for(auto it:dq){
    cout<<it<<" ";  //4 5  because delete will be before the dq[2] no index.
  }cout<<endl;

  //-------------------------------------------------  insert --------insert in a range -----------------

   deque<int>dq2={1,2,3,4,5,6}; // for insetr we can use iterator because iterator can point the index where i can insert value.

   deque<int>::iterator it2;

   it2=dq2.begin()+1;

   dq2.insert(it2,8);
   cout<<" After insert 8 at the 1 no idx the answer is:";

   for(auto it2:dq2){

    cout<<it2<<" ";
   }cout<<endl;

   //deque<int>::iterator it2;

   it2=dq2.begin()+3;
   dq2.insert(it2,3,9);

   cout<<" After entering 4th indx no of 3 times 9 .the answer is:";
   for(auto it2:dq2){
    cout<<it2<<" ";
   }cout<<endl;



  // ------------swap-------------------

  deque<int> dq3={1,2,3,4};

  deque<int>dq4={7,8,0};

  swap(dq3,dq4);

  for(auto it5:dq4){

    cout<<it5<<" ";  //1 2 3 4
  }cout<<endl;










}

