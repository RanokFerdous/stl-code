
#include<bits/stdc++.h>
using namespace std;
int main(){

    deque<int>dq;
    dq.push_back(1);
    dq.push_back(2);
    dq.push_back(3);
    dq.push_back(4);
    dq.push_back(5);
    dq.push_back(6);
    dq.push_back(7);

    cout<<"Deque element are:";
    for(int i=0;i<dq.size();i++){

        cout<<dq[i]<<" ";
    }cout<<endl;

    cout<<dq.front()<<endl;  //front er value display kora.
    cout<<dq.back()<<endl;// last er value display kora.

    /*
    dq.pop_front();  //1 is deleted
    dq.pop_back();// 7 is deleted now.

     for(int i=0;i<dq.size();i++){

        cout<<dq[i]<<" ";
    }cout<<endl;
   */

                                  //------------how to delete any one value----------.

   /*deque<int>::iterator it;

   it=dq.begin()+2;  //value :3

   dq.erase(it); // erase the value 3.
   cout<<" After the erase the value of 3.the value is:";
   for(int i=0;i<dq.size();i++){

        cout<<dq[i]<<" ";
    }cout<<endl;

    */

                                  //---------------------------------Range  er vitor value delete ---------------------.




   /* deque<int>:: iterator it,it1;

    it=dq.begin();
    it1=dq.begin()+2;

    dq.erase(it,it1);
    cout<<"after erase the value we get:";

    for(auto val:dq ){
        cout<<val<<" ";   // OUTPUT:  3 4 5 6 7
    }cout<<endl;

    */

    //-----------------------------------INSERT VALUE---------->>

   /* deque<int>:: iterator it;

    it=dq.begin()+3;
    dq.insert(it,34);
    cout<<"After insert in th e 3rd index:";

     for(auto val:dq ){
        cout<<val<<" ";   // OUTPUT:
    }cout<<endl;
  */



    deque<int>:: iterator it;

    it=dq.begin()+3;
    dq.insert(it,3,88);
    cout<<"After insert in th e 3rd index:";

     for(auto val:dq ){
        cout<<val<<" ";   // OUTPUT:  1 2 3 88 88 88 4 5 6 7
    }cout<<endl;



    deque<int>dq1={3,4,55,6};
    deque<int>dq2={5,6,99,423};

    //swap(dq1,dq2);  //    THIS BOTH 2 LINE ARE WORKING
    dq1.swap(dq2);   // THIS BOTH 2 LINE ARE WORKING .

    cout<<"After swaping the value:dq1 is:";

    for(auto val:dq1){
        cout<<val<<"  "; //output: 5,6,99,423.
    }cout<<endl;













}
