#include<bits/stdc++.h>
using namespace std;
int main(){

    multiset<int>ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(3);
    ms.insert(2);
    ms.insert(4);
    ms.insert(5);
    ms.insert(3);

    cout<<"the input value are:";
    for(auto it: ms){
        cout<<it<<" ";
    }cout<<endl;

    cout<<" Print the value using begin and end function:";

    for(auto it=ms.begin();it!=ms.end();it++){
        cout<<*it<<" ";
    }cout<<endl;

    //-----------------erase ------------------

    ms.erase(2);// all 2 value will be deleted.
     cout<<" After deleting value:";
    for(auto it=ms.begin();it!=ms.end();it++){
        cout<<*it<<" ";
    }cout<<endl;

    //--------------point kora 1 ta value erase korta-----------

    auto it=ms.begin();

    ms.erase(it);
    cout<<" After deleting the first value:";
     for(auto it=ms.begin();it!=ms.end();it++){
        cout<<*it<<" ";
    }cout<<endl;


    auto it1=ms.begin();
    advance(it1,3);

    ms.erase(it1);
    cout<<" After deleting the 3rd index value:";
     for(auto it1=ms.begin();it1!=ms.end();it1++){
        cout<<*it1<<" ";
    }cout<<endl;


    //---------------------find ------------count-----------

    auto it3=ms.find(5);

    if(it3==ms.end()){
        cout<<"Not find"<<endl;
    }else cout<<" Find the value"<<endl;

    cout<<"count the value of 5:"<<ms.count(5)<<endl;

    //-------------lower bound and upperbound------------

    multiset<int>ms1={1,2,3,5,1,2};

    for(auto val:ms1){
        cout<<val<<" ";
    }cout<<endl;

    auto val1=ms1.lower_bound(2);
    cout<< "Lower bound of 2 is:"<<*val1<<endl;//2  // *  must be needed in the line .

    auto  val2=ms1.lower_bound(4);
     cout<< "Lower bound of 4 is:"<<*val2<<endl;  // 5


    auto  val3=ms1.lower_bound(48);
     cout<< "Lower bound of 4 is:"<<*val3<<endl;  //output the greatest value of this set 6

     auto  val4=ms1.lower_bound(-21);
     cout<< "Lower bound of 4 is:"<<*val4<<endl;// output the lowest value of this set 1


// ***************question: if input 1 2 2 2 5 and we use it=ms3.lower_bound(2) then which 2 are pointing the it.



    multiset<int>ms4={1,2,2,2,5};

    auto it6=ms4.lower_bound(2);

    for(auto it7= it6;it7!=ms4.end();it7++){

        cout<<*it7<<" " ;  // ***********2 2 2 5  that means it6 point to the 1 st 2  of this set.
    }cout<<endl;


    //-------------------------UPPER BOUND LEARNING ---------------

    auto it8=ms4.upper_bound(2);
    cout<<"the value of 2 in upper bound:  "<<*it8<<endl;

     auto it9=ms4.upper_bound(927);
    cout<<"the value of 972 in upper bound:  "<<*it9<<endl;

     auto it10=ms4.upper_bound(-13);
    cout<<"the value of -13 in upper bound:  "<<*it10<<endl;

     auto it11=ms4.upper_bound(5);
    cout<<"the value of 5 in upper bound:  "<<*it11<<endl;

     auto it12=ms4.upper_bound(1);
    cout<<"the value of 1 in upper bound:  "<<*it12<<endl;



    cout<<"----------------FINSIH THE MULTISET-----------------" <<endl;






}
