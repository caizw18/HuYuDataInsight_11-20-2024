#include <stdio.h>

int main()
{
    //数组指针遍历数组

    int a[5] = {11, 22, 33, 44, 55};

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", *(a + i));
    }
    
    return 0;
}