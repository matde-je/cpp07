#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>
#include <exception>


template <typename T> 

class Array
{
    public:
        Array();
        ~Array();
        Array(unsigned int n);
        Array(const Array &copy);

        Array &operator=(const Array &copy);
        T &operator[](int i);

        int size_(void) const;

    private:
        T* array;
        int size;

};


template <typename T>
Array<T>::Array() {
    this->array = new T[0];
    size = 0;
}

template <typename T>
Array<T>::~Array() {
    delete [] this->array;
}

template <typename T>
Array<T>::Array(unsigned int n) {
    this->array = new T[n];
    this->size = n;
}

template <typename T>
Array<T>::Array(const Array &copy) {
    array = NULL;
    *this = copy;
}

template <typename T>
Array<T> & Array<T>::operator=(const Array &copy) {
    if (array != NULL)
		delete [] array;
    this->array = new T[copy.size];
    this->size = copy.size;
    for (int i = 0; i < this->size; i++)
        this->array[i] = copy.array[i];
    return *this;
}

template <typename T>
T &Array<T>::operator[](int i) {
    try {
        if (i >= size || i < 0) {
            throw std::out_of_range("Index out of range");
        }
        return array[i];
    }
    catch (const std::out_of_range& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
        return array[size -1];
    }
}

template <typename T>
int Array<T>::size_(void) const {
    return this->size;
}

#endif