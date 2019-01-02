//未通过
#include <stdio.h>
long m, n, x0, y0;
int v0x, v0y;
int main()
{
    long x, y;
    int vx, vy;
    scanf("%ld %ld %ld %ld %d %d", &n, &m, &x0, &y0, &v0x, &v0y);
    x = x0;
    y = y0;
    vx = v0x;
    vy = v0y;
    while ((x != 0 || y != 0) && (x != 0 || y != m) && (x != n || y != 0) && (x != n || y != m))
    {
        x = x + vx;
        y = y + vy;
        if (x == 0 || x == n)
        {
            vx = -vx;
            if (x == x0 && y == y0 && vx == v0x && vy == v0y)
            {
                printf("-1\n");
                return 0;
            }
            continue;
        }
        if (y == 0 || y == m)
        {
            vy = -vy;
            if (x == x0 && y == y0 && vx == v0x && vy == v0y)
            {
                printf("-1\n");
                return 0;
            }
            continue;
        }
        if (x == x0 && y == y0 && vx == v0x && vy == v0y)
        {
            printf("-1\n");
            return 0;
        }
    }
    printf("%ld %ld\n", x, y);
    return 0;
}