#include <stdio.h>
#include <stdlib.h>

int main()
{
    char h[10][5][5] =
    {
        {
            "xxxx",
            "x--x",
            "x--x",
            "x--x",
            "xxxx",
        },
        {
            "---x",
            "---x",
            "---x",
            "---x",
            "---x",
        },
        {
            "xxxx",
            "---x",
            "xxxx",
            "x---",
            "xxxx",
        },
        {
            "xxxx",
            "---x",
            "xxxx",
            "---x",
            "xxxx",
        },
        {
            "x--x",
            "x--x",
            "xxxx",
            "---x",
            "---x",
        },
        {
            "xxxx",
            "x---",
            "xxxx",
            "---x",
            "xxxx",
        },
        {
            "x---",
            "x---",
            "xxxx",
            "x--x",
            "xxxx",
        },
        {
            "xxxx",
            "---x",
            "---x",
            "---x",
            "---x",
        },
        {
            "xxxx",
            "x--x",
            "xxxx",
            "x--x",
            "xxxx",
        },
        {
            "xxxx",
            "x--x",
            "xxxx",
            "---x",
            "---x",
        },
    };
    int nume, x[12], i = 0, c = 0;
    printf("in put number \n");
    scanf_s("%d", &nume);
    while (nume > 0)
    {
        x[i] = nume % 10;
        nume = nume / 10;
        i++;
    }
    c = i;
    for (int k = 0; k < 5; k++)
    {
        for (i = c - 1; i >= 0; i--)
        {
            printf("%s\t", h[x[i]][k]);
        }
        printf("\n");
    }
    return 0;
}
