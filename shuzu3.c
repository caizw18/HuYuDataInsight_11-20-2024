#include <stdio.h>

int main()
{
    //如果指针变量p指向数组的一个成员，那么p++就相当于指向下一个成员，这种方法常用来遍历数组。

    int a[] = {11, 22, 33, 44, 55, 999};

    int* p = a;

    while(*p != 999){
        printf("%d\n", *p);
        p++;
    }
    return 0;
}
