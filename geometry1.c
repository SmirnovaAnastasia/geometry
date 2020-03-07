#include <stdio.h>

struct triange

{
    int x1;
    int y1;
    int x2;
    int y2;
    int x3;
    int y3;
};

struct circles

{
    int x1;
    int y1;
    int r;
};

int main()

{
    int n, j = 0, k = 0;
    int v;
    printf("How many figuras do you want?\n");
    scanf("%d", &n);
    struct triange tri[n];
    struct circles cir[n];
    for (int i = 0; i < n; i++)

    {
        printf("Do you want triangle?\n");
        scanf("%d", &v);
        if (v == 1)

        {
            scanf("%d %d %d %d %d %d %d %d",
                  &tri[j].x1,
                  &tri[j].y1,
                  &tri[j].x2,
                  &tri[j].y2,
                  &tri[j].x3,
                  &tri[j].y3,
                  &tri[j].x1,
                  &tri[j].y1);
            j++;
        }

        else if(v ==0)
        {
            scanf("%d %d %d", &cir[k].x1, &cir[k].y1, &cir[k].r);
            k++;
        }

    }
    return 0;
}