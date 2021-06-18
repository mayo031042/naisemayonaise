#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <cstddef>

template <class T>
class Array
{
private:
    T *a;

public:
    int length;
    Array()
    {
        length = 0;
        a = new T[0];
    }

    Array(int len)
    {
        length = len;
        a = new T[length];
    }

    T &operator[](int i)
    {
        // if( i < 0 or length < i) return;
        return a[i];
    }

    Array<T>& operator=(Array<T> &b){
        if(a!= NULL) delete[] a;
        a = b.a;
        b.a = NULL;
        length = b.length;
        return *this;
    }
};

#endif