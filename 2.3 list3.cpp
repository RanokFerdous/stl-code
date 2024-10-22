//#include<bits/stdc++.h>
//using namespace std;
//int main(){

#include<bits/stdc++.h>
using namespace std;
int main(){

    list<int> li1;
    li1.push_back(1);
    li1.push_back(2);
    li1.push_back(3);
    li1.push_back(4);
    li1.push_back(5);
    li1.push_back(6);
    li1.push_back(7);

    list<int>::iterator it;

    it = li1.begin();

    advance(it, 3); // now it indicates the 3rd index

    li1.insert(it, 43); // insert 43 at the 3rd index

    // Correct iteration
    for(auto &val : li1) {
        cout << val << " ";  // no need for * because we're using auto with reference
    }
    cout << endl;

    return 0;
}






//}
