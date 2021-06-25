#include "arraystack.h"
#include <stdio.h>

int testArrayStackInit()
{
    ArrayStack<int> arr;
    return 0;
}

int testArrayStackIndex()
{
    ArrayStack<int> arr;
    arr.add(0, 10);
    if (arr.get(0) != 10)
    {
        return 1;
    }
    return 0;
}

int testArrayStackSize()
{
    ArrayStack<int> arr;
    arr.add(0, 2);
    arr.add(0, 1);
    arr.add(0, 0);
    if (arr.size() != 3)
    {
        return 1;
    }
    return 0;
}

int testArrayStackGet()
{
    ArrayStack<int> arr;
    arr.add(0, 2);
    arr.add(0, 1);
    arr.add(0, 0);
    if (arr.get(2) != 2)
    {
        return 1;
    }
    return 0;
}

int testArrayStackSet()
{
    ArrayStack<int> arr;
    arr.add(0, 1);
    arr.add(0, 0);
    arr.set(0, 3);
    if (arr.get(0) != 3)
    {
        return 1;
    }
    return 0;
}

int testArrayStackAdd()
{
    ArrayStack<int> arr;
    arr.add(0, 2);
    arr.add(0, 1);
    arr.add(0, 0);
    if (arr.get(1) != 1)
    {
        return 1;
    }
    if (arr.size() != 3)
    {
        return 2;
    }

    return 0;
}

int testArrayStackRemove()
{
    ArrayStack<int> arr;
    arr.add(0, 2);
    arr.add(0, 1);
    arr.add(0, 0);
    if (arr.remove(1) != 1)
    {
        return 1;
    }
    if (arr.size() != 2)
    {
        return 2;
    }

    return 0;
}

int main()
{
    if (testArrayStackInit() != 0)
    {
        return 1;
    }

    if (testArrayStackIndex() != 0)
    {
        return 1;
    }

    if (testArrayStackSize() != 0)
    {
        return 1;
    }

    if (testArrayStackGet() != 0)
    {
        return 1;
    }

    if (testArrayStackSet() != 0)
    {
        return 1;
    }

    if (testArrayStackAdd() != 0)
    {
        return 1;
    }

    if (testArrayStackRemove() != 0)
    {
        return 1;
    }

    printf("done\n");
    return 0;
}