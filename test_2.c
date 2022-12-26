#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void printArray(int arr[])
{
    int i = 1, arrLength = arr[0] + 1;
    // Admindroid Array will has the length as its first element always.

    for (; i < arrLength; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void reverseArray(int arr[])
{
    int a[10000], b[10000], i, j, k, temp, c = 0;
    int n = arr[0];
    for (i = 0; i <= n; i++)
    {
        a[i] = arr[i];
    }
    for (i = 0; i < n - 1; i++)
    {

        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    k = 0;
    j = n - c;
    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            if (j < n)
                b[j++] = a[i];
        }
        else
        {
            if (k < n - c)
                b[k++] = a[i];
        }
    }

    // while (i < j)
    // {
    //     temp = arr[i];
    //     arr[i] = arr[j];
    //     arr[j] = temp;
    //     i++;
    //     j--;
    // }
    printArray(a);
}

void runTestCase(int tcNo, int arr[])
{
    printf("Test Case %d:\n", tcNo);
    printf("Input: ");
    printArray(arr);
    printf("Output: ");
    reverseArray(arr);
    printf("\n");
}

int main()
{
    int adminDroidArray1[] = {4, 2, 4, 3, 1};
    int adminDroidArray2[] = {6, 1, 3, 8, 0, 5, 2};
    int adminDroidArray3[] = {3, 4, 2, 0};
    int adminDroidArray4[] = {10, 1, 3, 2, 9, 10, 7, 5, 8, 6, 4};
    runTestCase(1, adminDroidArray1);
    runTestCase(2, adminDroidArray2);
    runTestCase(3, adminDroidArray3);
    runTestCase(4, adminDroidArray4);
    return 0;
}