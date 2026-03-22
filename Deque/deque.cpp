/*Unlike the vectors, deques allow insertion and deletion of elements from both ends.
Some of the common operations on deques are:
- push_front(): Inserts an element at the beginning of the deque.
- push_back(): Inserts an element at the end of the deque.
- pop_front(): Removes the first element of the deque.
- pop_back(): Removes the last element of the deque.
- front(): Returns the first element of the deque.
- back(): Returns the last element of the deque.
- size(): Returns the number of elements in the deque.
- erase(): Removes elements from the deque at a specified position or range.
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    deque<int> d;//declaration of a deque
    d.push_back(1);//inserts 1 at the end of the deque
    d.push_back(2);
    d.push_back(3);
    cout<<"Elements of the deque: ";
    for(int i:d)
    {
        cout<<i<<" ";//prints the elements of the deque
    }
    cout<<endl;
    d.push_front(0);//inserts 0 at the beginning of the deque
    cout<<"Elements of the deque after push_front: ";
    for(int i:d)
    {
        cout<<i<<" ";//prints the elements of the deque after push_front
    }
    cout<<endl;
    d.pop_back();//removes the last element of the deque
    cout<<"Elements of the deque after pop_back: ";
    for(int i:d)
    {
        cout<<i<<" ";//prints the elements of the deque after pop_back
    }
    cout<<endl;
    d.pop_front();//removes the first element of the deque
    cout<<"Elements of the deque after pop_front: ";
    for(int i:d)
    {
        cout<<i<<" ";//prints the elements of the deque after pop_front
    }
    d.erase(d.begin(), d.begin()+1);//erases the first element of the deque
    cout<<endl<<"Elements of the deque after erase: ";  
    for(int i:d)
    {
        cout<<i<<" ";//prints the elements of the deque after erase
    }
}