#include <stdio.h>
int main()
{
    int a[] = {5,6,7,8};
    unsigned int i = 1, j;
    for (; ++i; j = i)
        ;
    while (j >>= 1)
        i++;
    printf("answer : %d", sizeof(a) / ((++i) >> 3));
}
