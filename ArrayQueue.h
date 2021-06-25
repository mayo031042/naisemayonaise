#include "Array.h"

template <class T>
class ArrayQueue
{
private:
    Array<T> a

        public : int j;
    int n;

    bool add(T x)
    {
        if (n + 1 >= a.length)
        {
            resize();
        }
        a[(j + n) % a.length] = x;
        n++;
        return true;
    }

    T remove()
    {
        T x = a[j];
        j = (j + 1) % a.length;
        n--;
        if (a.length >= n * 3)
        {
            resize();
        }
        return x;
    }

    void resize()
    {
        Array<T> b(max(n * 2, 1));
        for (int k = 0; k < n; k++)
        {
            b[k] = a[(j + k) % a.length];
        }
        a = b;
        j = 0;
    }
};
