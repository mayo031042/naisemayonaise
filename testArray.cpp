#include "Array.h"
#include <stdio.h>

int testArrayInit()
{
    Array<int> arr(10);
    return 0;
}

int testArrayIndex()
{
    Array<int> arr(10);
    arr[3] = 10;
    if (arr[3] != 10)
    {
        return 1;
    }
    return 0;
}

int main()
{
    if (testArrayInit() != 0)
    {
        return 1;
    }

    if (testArrayIndex() != 0)
    {
        return 1;
    }
    printf("done\n");
    return 0;
}