
//--------list topic ---

#include<bits/stdc++.h>
using namespace std;
int main(){


    list<int>li1;
    li1.push_back(1);
    li1.push_back(2);
    li1.push_back(3);
   li1.push_back(4);
    li1.push_back(5);
    li1.push_back(6);
    li1.push_back(7);


        list<int>:: iterator it;

        it=li1.begin();

        advance(it,3);// now it indicate the 3rd index.

        li1.insert(it, 43);// store 43 in the index 3. li[3]=43;

         for(auto it:li1){
            cout<<it<<" ";  //here can't using *  with the iterator.
        }cout<<endl;

     //list<int>:: iterator it;

        it=li1.begin();
        advance(it,5);// it indicate to the 5th index.
        li1.insert(it,4,8); // 1 2 3 43 4 8 8 8 8 5 6 7

     for(auto it:li1){
            cout<<it<<" ";  //here can't using *  with the iterator.
        }cout<<endl;


        //<----------HOW TO ERASE IN LINK LIST---------->>

        list<int>li2={21,22,23,24,25,26,27};
        list<int>::iterator it1,it2;

        it1=li2.begin();  //  error: if we use it  here. because it is already use one time in this programme .

        it2=li2.begin();
        advance(it2,3);

        li2.erase(it1,it2);

        for(auto val:li2){

            cout<<val<<" ";  //24, 25, 26.
        }cout<<endl;

        list<int>li3={1,3,2,4,5,2,2,2};

        li3.remove(2);  ////////////////ALL 2 WILL BE REMOVED.

        for(auto it: li3){
            cout<<it<<" ";
        }cout<<endl;

        li3.reverse();
        cout<<"After reversing ,the value are:"<<endl;
        for(auto it: li3){
            cout<<it<<" ";
        }cout<<endl;

        li3.sort();
        cout<<"After sorting the value are:"<<endl;
        for(auto it: li3){
            cout<<it<<" ";
        }cout<<endl;

                            // -------unique input: 1112353111333444 == 12354134-----------//


               list<int>li4={1,1,1,2,3,5,3,1,1,1,3,3,3,4,4,4};


                li4.unique();

            cout<<"input: 1,1,1,2,3,5,3,1,1,1,3,3,3,4,4,4;"<<endl;
                cout<<"output: ";
                for(auto val:li4)   {

                    cout<<val<<" ";
                }cout<<endl;

            //-------------SWAP,  Merge function------------.


            list<int>li5={1,2,4,5,6,7};
            list<int>li6={2,4,9,10,11,14};

            li5.swap(li6);
            cout<<"after swaping the value is:";
            for(auto val:li5){
                cout<<val<<" ";

            }cout<<endl;

             li5.merge(li6);
             cout<<"after merging the value:";
                for(auto val:li5){
                cout<<val<<" ";
                }cout<<endl;
}




