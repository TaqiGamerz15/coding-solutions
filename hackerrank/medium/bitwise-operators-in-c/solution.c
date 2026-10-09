#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

void calculate_the_maximum(int n, int k)
{
    int maxAnd = 0;
    int maxOr = 0;
    int maxXor = 0;
    int a, b;

    for (a = 1; a <= n; a++)
    {
        for (b = a + 1; b <= n; b++)
        {
            int andVal = a & b;
            int orVal = a | b;
            int xorVal = a ^ b;

            if (andVal < k && andVal > maxAnd)
                maxAnd = andVal;

            if (orVal < k && orVal > maxOr)
                maxOr = orVal;

            if (xorVal < k && xorVal > maxXor)
                maxXor = xorVal;
        }
    }

    printf("%d\n", maxAnd);
    printf("%d\n", maxOr);
    printf("%d\n", maxXor);
}

int main(void)
{
    int n, k;

    scanf("%d %d", &n, &k);

    calculate_the_maximum(n, k);

    return 0;
}
