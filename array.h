
class Array
{
private:
    int *a;
    int length;

public:
    Array(int len)
    {
        length = len;
        a = new int[length];
    }

    int &operator[](int i)
    {
        return a[i];
    }
};
