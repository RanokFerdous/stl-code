#include<bits/stdc++.h>
using namespace std;

int main(){                                  // QUEUE::::--->>>     FIFO   FIFO        FIFO                 FIFO.

    queue<int>q;

    q.push(1);  // -*****in queue just push   .  not push_back because always value are store in the last

    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);

   // for(auto it:q){   *********HERE WE CCANNOT USE THE  AUTO DEYWORD.
    //    cout<<it<<" ";
   // }cout<<endl;

 cout<<"The store value is:";
     while(!q.empty()){   //  while(!q.size()==0)  // while(q.size()>0)  *********line  for printing any value

        cout<<q.front()<<" ";
        q.pop();
     } cout<<endl;


     cout<<"The front value is:"<<q.front();  // answer:  0.  because all value are already  0 and the q is empty now.
     cout<<endl;

     //queue<int>q1={1,2,3},q2={4,5,6};

     //queue<int>q1={1,2,3};

     //queue<int>q2={4,5,6};

     queue<int>q1,q2;

     q1.push(1);
      q1.push(2);
       q1.push(3);

       q2.push(8);
       q2.push(9);
       q2.push(10);



     q1.swap(q2);

 cout<<"After swaping the q1 value is:";

    while(!q1.empty()){
        cout<<q1.front()<<" ";//8,9,10
        q1.pop();
     } cout<<endl;
     ///////////////////////-------------------------------------emplace use as a push  in the queue stl.
     queue<int>q4;

     q4.emplace(18);
     q4.emplace(89);

     //q4.clear();  this is wrong in queue.

 while(!q4.empty()){
        cout<<q4.front()<<" ";// 18, 89
        q4.pop();
     } cout<<endl;




}

