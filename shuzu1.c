#include <stdio.h>

int main()
{
    int a[5] = {11, 22, 33, 44, 55};

    int* p;

    // p = &a[0];

    //数组名就是指向第一个成员的指针，所以也可以如下写法

    p = a;

    printf("%d\n", *p);

    return 0;
}
