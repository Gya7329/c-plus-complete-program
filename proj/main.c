#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a,b,sum,dif;
    float c,d,sum1,dif1;
    scanf("%d %d ",&a,&b);
    scanf("%f %f",&c,&d);
    sum=a+b;
    sum1=c+d;
    printf("%d %f ",sum,sum1);
    dif=a-b;

dif1=c-d;
printf("%d %f",dif,dif1);
    return 0;
}
