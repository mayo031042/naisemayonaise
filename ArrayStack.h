#include "Array.h"

int max(int x,int y){return x>y?x:y;}

template <class T>

class ArrayStack{
private:
    int alpha = 2;
    int beta = 4;

    Array<T> a;
    int n;

    void resize(){
        Array<T> b(max(alpha * n, 1));
        for(int i = 0; i < n; i++){
            b[i] = a[i];
        }
        a = b;
    }

public:
    ArrayStack(){
        Array<T> b(1);
        a = b;
        n = 0;
    }

    int size()
    {
        return n;
    }

    T get(int i)
    {
        return a[i];
    }
    
    T set(int i,T x)
    {
        T y = a[i];
        a[i] = x;
        return y;
    }

    void add(int i,T x)
    {
        if(n+1 >= a.length) resize();
        for (int j = n; j > i ; j--)
            a[j] = a[j-1];
        a[i] = x;
        n++;
    }
    
    T remove(int i){
        T x = a[i];
        for(int j = i; j <  n-1; j++){
            a[j] = a[j+1];
        }
        n--;
        if(a.length >= beta * n) resize();
        return x;
    }

};