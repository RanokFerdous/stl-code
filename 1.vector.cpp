    #include<bits/stdc++.h>
    using namespace std;
    int main(){

    vector<int>v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

   // cout<<v.at(0)<<endl;
   // cout<<v[1]<<endl;
    //size
    cout<<"size Of this vector is "<<v.size()<<endl;
    //clear this vector//
    //v.clear();                                             //     clear

   // cout<<"size Of this vector is "<<v.size()<<endl;

   // if(v.empty())                                             //empty
     //   cout<<"vector is empty"<<endl;
       // else cout<<"vector is not empty"<<endl;

   // v.pop_back();                                              //pop_back();  means delete the last value.
   // v.pop_back();
   // for(int i=0;i<v.size();i++){
   //     cout<<v[i]<<endl;
    //}cout<<endl;

 //v.erase(v.begin(),v.begin()+2); //***** 1 and 2 will be deleted. not 3 deleted                  //erase

    //v.erase(v.begin(),v.begin()+1);  // only 1 will be deleted.

    //
    //v.erase(v.begin(),v.end());// all number will be deleted.

   // v.erase(v.begin()); // deletd: 1

   // v.erase(v.end());  ------this line is error . find out what is error.
    //v.push_back(6);
   //v.erase( v.begin()+2,v.end()); //ans: 1 2
    //v.erase( v.begin()+2,v.begin()+3);  //ans: 1 2 3 4
   // v.pop_back(); //1 2 3 4


    //topic: add a value to a fixed place

   // v.insert(v.begin(),1);// 1 1 2 3 4 5                                       // insert
    //v.insert(v.begin()+1,3); //  1 3 2 4 5
   // v.insert(v.begin()+3,3,9); //  1 2 3  9 9 9  4 5


for(int i=0;i<v.size();i++){
       cout<<v[i]<<endl;
    }cout<<endl;


    //  swap this two vector

    vector<int>v2;

    v2.push_back(11);
    v2.push_back(12);
    v2.push_back(13);
    v2.push_back(14);
    v2.push_back(15);
    swap(v,v2);                                           //swap to vector

    cout<<"After swaping ,the v value is:"<<endl;

    for(int i=0;i<v.size();i++){
       cout<<v[i]<<endl;
    }cout<<endl;

    //sort function || reverse function

    sort(v.begin(),v.end());                                //sort
    cout<<"after sorting the v:"<<endl;
     for(int i=0;i<v.size();i++){
       cout<<v[i]<<endl;
    }cout<<endl;


      //  cout<<"after reversing the v:"<<endl;

    //reverse(v.begin(),v.end());
                                                                     //reverse
   //  for(int i=0;i<v.size();i++){
   //    cout<<v[i]<<endl;
   // }cout<<endl;

    // ------topic : "iteration" for printing the vector

    //v=11, 12, 13 , 14 , 15

    vector<int>::iterator it;  //iterator work like a pointer                            //iterator

    it=v.begin()+2; //iterator point to v[2]=13.
    cout<<*it<<endl; // 13
                                    // here **** two value print using 1 iterator. v[2]=13, v[3]=3.
    it=v2.begin()+2;
    cout<<"iterator indicating value is: it=v2.begin()+2;"<<*it<<endl;  // 3


    it=v.end()-1;  //15;  ***************important line

    it=v.end(); //  0 because end() is indicated to last nest element which is null or 0.
    cout<<"iterator indicating value is:  v.end()=="<<*it<<endl;



    }
