#include <stdio.h>
#include <string.h>

struct triangle

{
    double x1;
    double y1;
    double x2;
    double y2;
    double x3;
    double y3;
};

struct circles

{
    double x1;
    double y1;
    double r;
};

int main()
{
    int n, j = 0, k = 0;
    double p1, p2;
    printf("How many figures do you want?\n");
    int status = scanf("%d", &n);
    if (status != 1) {
	printf("Incorrect data entered\n");
    	return 1;
    }
    char t[80]= "triangle";
    char c[80] = "circle";
    struct triangle tri[n];
    struct circles cir[n];
    printf("Enter figures:\n");
    for (int i = 0; i < n; i++)
    {
	char word[80];
	scanf("%s", word);
	if( strcmp(word, t) == 0)
	{
    	    scanf("%lf %lf %lf %lf %lf %lf %lf %lf", &tri[j].x1, &tri[j].y1, &tri[j].x2, &tri[j].y2, &tri[j].x3, &tri[j].y3, &p1, &p2);
    	    if(!(p1 == tri[j].x1)||(!(p2 == tri[j].y1)))
    	    {
        	printf("Incorrect data entered\n");
        	return 1;
	    }
        j++;
        }
	else if( strcmp(word, c) == 0)
	{
	    scanf("%lf %lf %lf", &cir[k].x1, &cir[k].y1, &cir[k].r);
	    k++;
	    if(cir[k].r < 0)
	    {
	        printf("Incorrect data entered\n");
	        return 1;
	    }
	}
    }

    for (int i = 0; i < j; i++) 
    {
	printf("%d: %lf %lf, %lf %lf, %lf %lf\n", (i + 1), tri[i].x1, tri[i].y1, tri[i].x2, tri[i].y2, tri[i].x3, tri[i].y3);
    }
    if(j>0)
    {
	printf("------------------\n");
    }
    for (int i = 0; i < k; i++) {
	printf("%d: %lf %lf, %lf\n", i + 1, cir[i].x1, cir[i].y1, cir[i].r);
    }
    return 0;
}
