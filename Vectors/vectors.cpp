#include<bits/stdc++.h>
using namespace std;
/*What is a vector in C++?
A vector is a dynamic array that can grow and shrink in size during runtime.
Some of the common operations on vectors are:
- push_back(): Inserts an element at the end of the vector. 
- pop_back(): Removes the last element of the vector.
- front(): Returns the first element of the vector.
- back(): Returns the last element of the vector.
- size(): Returns the number of elements in the vector.
- capacity(): Returns the maximum number of elements that the vector can hold.


The major difference between the vector and the array is that the vector is dynamic, meaning its size can be changed during runtime, while the array has a fixed size.
and the important factor to be noted is that the difference between the front() and back() function v/s the begin() and end() iterators
What do you mean by iterators?  
Iterators are objects that point to elements in a container and allow you to traverse through the elements.

In vectors the elements can inly be pushed and poped only at the ends unlike deque as it can push and pop from both ends*/
int main()
{
    vector<int> a;//dynamically allocates the memory for the vector
    a.push_back(1);//inserts 1 at the end of the vector
    a.push_back(2);
    a.push_back(3);
    cout<<"Capacity: "<<a.capacity()<<endl;
    cout<<"Size: "<<a.size()<<endl;
    vector<int> last(a);//copy constructor
    cout<<"Elements of last vector: ";
    for(int i=0; i<last.size(); i++)
    {
        cout<<last[i]<<" ";
    }
    last.pop_back();//removes the last element of the vector
    cout<<endl<<"Elements of last vector after pop_back: ";
    for(int i=0; i<last.size(); i++)
    {
        cout<<last[i]<<" ";
    }
    cout<<endl;
    cout<<"First element: "<<last.front()<<endl;//returns the first element of the vector
    cout<<"Last element: "<<last.back()<<endl;//returns the last element of the vector

    vector<int> v(5,1);//vector of size 5 with all elements as 1
    cout<<"Elements of vector v: ";
    for(int i:v)//range based for loop to access elements of vector v
    {
        cout<<i<<" ";//prints the elements of vector v
    }

    //Examples of iterators
    vector<int> m = {3,5,1,2,4};
    sort(m.begin(), m.end());//sorts the vector m in ascending order
    cout<<endl<<"Elements of vector m after sorting: ";
    for(int i:m)
    {
        cout<<i<<" ";//prints the elements of vector m after sorting
    }
}