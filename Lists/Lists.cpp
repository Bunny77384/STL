/*What is list??
list is also a sequential container but the important fact that has to be remembered is that
internally they are implemented as a doubly linked list
Lists cannot be randomly accesed*/
#include<bits/stdc++.h>
using namespace std;
int main(){
list<int> l;
l.push_back(1);
l.push_back(2);
l.push_front(3);
l.push_front(4);
for(int i: l)
{
    cout<<i<<" ";
}
cout<<endl;
l.pop_back();
l.pop_front();
for(int i: l)
{
    cout<<i<<" ";
}
cout<<endl;
//Insertion is slightly difficult and different in lists as compared to vectors and arrays as they are implemented as doubly linked list
/*list<int> :: iterator it = l.begin();   
advance(it,1);//moves the iterator it to the next position
l.insert(it,10);//inserts 10 at the position pointed by the iterator it*/
//Lists cannot be randomly accesed
list<int> li ={1,2,3,4,5};
//cout<<li[2]<<endl;//this will give an error as lists cannot be randomly accessed
return 0;
}