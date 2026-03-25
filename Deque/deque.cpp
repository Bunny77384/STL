/*Unlike the vectors, deques allow insertion and deletion of elements from both ends.
Important thing to note is that deque are referred to as Double - ended - queues and
Dequeues are generic words that are usually used to pop an element from a queue 
but in C++ STL deque is a container that allows fast insertion and deletion at both ends.
Some of the common operations on deques are:
- push_front(): Inserts an element at the beginning of the deque.
- push_back(): Inserts an element at the end of the deque.
- pop_front(): Removes the first element of the deque.
- pop_back(): Removes the last element of the deque.
- front(): Returns the first element of the deque.
- back(): Returns the last element of the deque.
- size(): Returns the number of elements in the deque.
- erase(): Removes elements from the deque at a specified position or range.
Important point: Deque are internally implemented as dynamic arrays whereas that can grow
 and shrink in size during runtime. They 
are designed to provide fast insertionand deletion at both ends, 
making them suitable for scenarios where elements need to be added or removed from 
both the front and back of the container. Deques are often used in situations where a 
queue-like structure is needed but with the flexibility of adding or removing elements 
from both ends.These can be randomly accessed.
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