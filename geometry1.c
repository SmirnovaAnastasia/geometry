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

 printf("triange(t) or circles(c)?\n");

 scanf("%d", &v);

 if( v == "t")

 {

 scanf("%d %d %d %d %d %d %d %d", &tri[j].x1, &tri[j].y1, &tri[j].x2, &tri[j].y2, &tri[j].x3, &tri[j].y3, &tri[j].x1, &tri[j].y1); 

 j++;

 }

 else

 {

 scanf("%d %d %d", &cir[k].x1, &cir[k].y1, &cir[k].r); 

 k++;

 }

 

 for (int i = 0; i < j; i++) {

 scanf("%d: %d %d, %d %d, %d %d\n", i + 1, tri[i].x1, tri[i].y1, tri[i].x2, tri[i].y2, tri[i].x3, tri[i].y3); 

 } 

 printf("------------------'\n")

 for (int i = 0; i < k; i++) {

 scanf("%d: %d %d %d\n", i + 1, cir[i].x1, cir[i].y1, cir[i].r); 

 }

 }

 return 0;

}