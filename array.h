
template <class T>
class Array
{
private:
    T *a;
    int length;

public:
    Array(int len)
    {
        length = len;
        a = new T[length];
    }

    int &operator[](int i)
    {
        return a[i];
    }
};
