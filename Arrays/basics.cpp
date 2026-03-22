#include<bits/stdc++.h>
using namespace std;
/*What is an array in C++?
An array is a collection of elements of the same type stored in contiguous memory locations. It is a data structure that can hold a fixed number of values of the same type. The elements of an array can be accessed using an index, which starts from 0.*/
int main() {
    int arr[5] = {1, 2, 3, 4, 5};//declaration and initialization of an array
    cout << "Elements of the array: ";
    for(int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";//accessing elements of the array using index
    }

    /*In STL(standard template library) array can be created in the following way:*/
    array<int, 5> stl_arr = {5,4,3,2,1};
    cout << "\nElements of the STL array: ";
    for(int i = 0; i < 5; i++)
    {
        cout << stl_arr[i] << " ";
    }

    /*Some basics functions of STL arrays:*/
    cout << "\nSize of the STL array: " << stl_arr.size();
    cout << "\nFirst element of the STL array: " << stl_arr.front();
    cout << "\nLast element of the STL array: " << stl_arr.back();
    cout<<"\nIs the STL array empty? "<<stl_arr.empty();
    cout<<"\nElement at index 2: "<<stl_arr.at(2);
    
    return 0;
}