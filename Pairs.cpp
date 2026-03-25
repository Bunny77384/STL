/*Pairs are a part of utility library in C++
They donot require any header file to be included can directly be called and initialized*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    pair<int, int> p = {3,5};
    cout<<"First element of the pair: "<<p.first<<endl;//accessing first element of the pair
    cout<<"Second element of the pair: "<<p.second<<endl;//accessing second element of the pair
    pair<string, int> p1 ={"mithun", 7};
    cout<<"First element of the pair p1:"<<p1.first<<endl;
    cout<<"Second element of the pair p1:"<<p1.second<<endl;
    //Also you can create a pair of pairs
    pair<int, pair<string, int>> p2 ={1, {"mithun", 7}};
    cout<<"First element of the pair p2: "<<p2.first<<endl;
    cout<<"First element of the second pair p2: "<<p2.second.first<<endl;
    cout<<"Second element of the second pair p2: "<<p2.second.second<<endl;

    //Pairs in vectors
    vector<pair<int, int>> v= {{1,2}, {3,4},{5,6}};
    cout<<"Elements of the vector of pairs: "<<endl;
    for(auto p: v)
    {
        cout<<p.first<<" "<<p.second<<endl;
    }
    return 0;
}