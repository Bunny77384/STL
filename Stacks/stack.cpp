/*Stacks are a part of the STL in C++
They are LIFO (Last In First Out) data structures
Stack has the following inbuilt functions they are:
1. push() - Inserts an element at the top of the stack (or)
   emplace() - Creates an element in-place at the top of the stack
2. pop() - Removes the top element from the stack
3. top() - Returns the top element of the stack
4. empty() - Checks if the stack is empty
5. size() - Returns the number of elements in the stack
6. swap() - Exchanges the contents of two stacks*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.emplace(4);
    cout<<"Top element of the stack: "<<s.top()<<endl;//returns the top element of the stack
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    stack<int> s1;
    s1.push(5);
    s1.push(6);
    stack<int> s2;     
    s2.swap(s1);//swaps the contents of stack s and s1
    cout<<"Elements of stack s2 after swapping: ";
    while(!s2.empty())
    {
        cout<<s2.top()<<" ";
        s2.pop();
    }
    cout<<"Elements of stack s1 after swapping: ";//s1 becomes empty after swapping with s2
    while(!s1.empty())
    {
        cout<<s1.top()<<" ";
        s1.pop();
    }
    cout<<"Size of stack s1: "<<s1.size()<<endl;//returns the number of elements in the stack
    cout<<"Size of stack s2: "<<s2.size()<<endl;//returns the number of elements in the stack
    cout<<endl;
    
}