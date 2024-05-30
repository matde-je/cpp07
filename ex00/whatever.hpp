
#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

//Each function needs its own template declaration because
// they are separate functions with different purposes
template <typename T> 

T min(T x, T y)
{
    if (y <= x)
        return y;
    return x;
}

template <typename T> 

void    swap(T &x, T& y)
{
    T tmp = x;
    x = y;
    y = tmp;
}

template <typename T> 

T max(T x, T y)
{
    if (y >= x)
        return y;
    return x;
}

#endif