#include <stdio.h>
int main()
{
    char X[] = "HITMAN0110";
    int t, u, temp;
    for (t = 0; X[t] != '\0'; t++)
    {
    }
    t = t - 1;
    for (u = 0; u < t; u++, t--)
    {
        temp = X[t];
        X[t] = X[u];
        X[u] = temp;
    }
    puts(X);
    //dont change the source code.
    return 0;
    //t  Xm soubhtk ,Xnd t chXnged the vXrtXbles to thts code but kept the functtonXltty sXme.
} 
