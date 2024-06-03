#ifndef iter_hpp
#define iter_hpp

#include <iostream>
#include <string>

template <typename T> 

void chars( T a) {
    std::cout << a << std::endl;
}

//The third parameter can be an instantiated function template.
//every element of the array
template <typename T> 
void iter(T *array, size_t y, void (*f) (T &))
{
    int i = -1;
    while (++i < (int)y)
        f(array[i]);
}

#endif