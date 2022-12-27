#include <stdio.h>
int main()
{
    char A[] = "HITMAN0110";
    int i, j, temp;
    for (i = 0; A[i] != '\0'; i++)
    {
    }
    i = i - 1;
    for (j = 0; j < i; j++, i--)
    {
        temp = A[i];
        A[i] = A[j];
        A[j] = temp;
    }
    puts(A);
    return 0;
} 
