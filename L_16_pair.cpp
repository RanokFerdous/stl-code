#include<bits/stdc++.h>
using namespace std;

int main()
{
    /*
    topic:
    1. pair declaration
    2. how to push or insert value in pair
    3. '=='
    4. '!='
    5. '>='
    6. '<='
    7.swap()

    */

    /*
    //initialization pair


        pair<int, char> p,p1;

        p.first=10;
        p.second= 'a';

        cout<<p.first<<" "<<p.second<<endl;

    p1.first=29;
    p1.second= 'b';

    cout<<p1.first<<" "<<p1.second<<endl;


    //different way to initailize

    pair<int, int>g1,g2;

    g2= make_pair( 10, 4332);


      cout<<g2.first<< " "<<g2.second<<endl;  // 10 , 4332



    pair<int, char> part1;

    pair<string, double> part2( " ranok ferdous", 32.232);

    cout<<part2.first<< " "<<part2.second<<endl;

    part1.first= 100;
    part1.second= 'g';

    cout<<part1.first<<" "<<part1.second<<endl;

    */
/*

    pair<int, int> p( 11,10);

    pair<int, int> p2=p;  // p2==p .

    cout<<p.first<< " "<<p.second<<endl; //11 10


    cout<<p2.first<< " "<< p2.second<<endl;//11 10



    pair<string,string> p3,p4;

    p3=make_pair("ranok ferdous", " bad luck");

    p3=p4;

    cout<<p3.first<<" "<<p3.second<<endl;

    cout<<p4.first<<" "<<p4.second<<endl;


    if( p3==p4){cout<<"YES"<<endl;
    }
    else cout<<" NO"<<endl;



*/

    //**********comparison value

    pair<int, int> p( 10,20);
    pair<int,int> p2( 20, 20);

    if( p>=p2){cout<<"YES"<<endl;
    }else cout<<"NO"<<endl;  //no

    pair<int, int> p3( 20,30);

    pair<int,int> p4( 20,40);

    if( p3>p4)
    {
        cout<<"yes , p3 big"<<endl;
    }else cout<< " no, p4 is big"<<endl;  // p4














    }

