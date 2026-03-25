#include<bits/stdc++.h>
using namespace std;
/*What is a vector in C++?
A vector is a dynamic array that can grow and shrink in size during runtime.
Some of the common operations on vectors are:
- push_back(): Inserts an element at the end of the vector. 
- emplace_back(): Constructs an element in place at the end of the vector.
Similar to push_back() but it can be more efficient as it constructs the element 
directly in the memory location without creating a temporary object.Mithun you will learn 
more about this in the next upcoming practices.
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
    cout<<endl;
    vector<int> vec(3,10);
    cout<<vec.size()<<endl;
    for(int i:vec)
    {
        cout<<i<<" ";//prints the elements of vector vec
    }
    cout<<endl;
    vector<int> vec2 = {1,2,3,4,5,6,7};
    cout<<*(vec2.begin())<<endl;//prints the first element of the vector vec2 using iterator
    //the "*" is called as dereference operator which is used to access the value at the address pointed by the iterator
    cout<<"Before erasing"<<endl;
    for(auto i : vec2)
    {
        cout<<i<<" ";
    }
    cout<<endl;

   // vec2.erase(vec2.begin(), vec2.begin()+6);
    cout<<"After erasing"<<endl;
    for(auto i : vec2)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    //Using iteratrors iI'Ll be printing the elements of the vector vec2 using iterators
    cout<<"Using iterators to print the elements of vector vec2: "<<endl;
    //vector<int> :: iterator it;
    /*for(it = vec2.begin(); it!=vec2.end(); it++)
    {
        cout<<*(it)<<" ";//prints the elements of vector vec2 using iterators
    }*/
    //The next oneis the reverse begin (rbegiin()) iterator used to orint the vector in a 
    //reverse order
    /*cout<<endl<<"Using reverse iterators to print the elements of vector vec2 in reverse order: "<<endl;
    vector<int>:: reverse_iterator it;
    for(it = vec2.rbegin(); it!=vec2.rend(); it++)
    {
        cout<<*(it)<<" ";
    }*/
   //FOr easy understanding c++ has a special keyword called as auto
   for(auto it = vec2.rbegin(); it!=vec2.rend(); it++)
   {
    cout<<*(it)<<" ";
   }
   //The insert function if forgotten as I was studying the list part 
    cout<<endl<<"Using insert function to insert elements in vector vec2: "<<endl;
    vector<int> vec3 ={1,2,3,4,5,6,7};
    //vec3.insert(3,10);//inserts 10 at index 3 of vector vec2
    /*Your logic is wrong Mithun i'll tell you why in normal arrays and 
    you can insert by specifying the index position but in vectors it is not 
    possible iit only uses iterators*/
    vec3.insert(vec3.begin() + 3,10);//inserts 10 at index 3 of vector vec2
    for(auto i : vec3)  
    {
        cout<<i<<" ";//prints the elements of vector vec2 after inserting 10 at index 3
    }
    cout<<endl;
    cout<<vec3[3]<<endl;
    return 0;

}