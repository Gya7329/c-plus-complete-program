#include <iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

struct Elements
{
    int i;
    int j;
    int x;

};
struct Sparse
{

    int m;
    int n;
    int num;
    struct Elements *e;


};
void create(struct Sparse *s)
{   int i;
    printf("Enter dimention:");
    scanf("%d %d",&s->m,&s->n);
    printf("Number of non zero ;");
    scanf("%d",&s->num);
    s->e=(struct Elements *)malloc(s->num*sizeof(struct Elements));
    printf("Enter non Zero element:  ");
    for(i=0;i<s->num;i++)

    scanf("%d%d%d",&s->e[i].i,&s->e[i].j,&s->e[i].x);

}
void display(struct Sparse s)
{
    int i,j,k=0;
    for(i=0;i<s.m;i++)
    {
        for(j=0;j<s.n;j++)
        {
            if(i==s.e[k].i && j==s.e[k].j)
                printf("  %d ",s.e[k++].x);
            else
                printf("0 ");

        }
        printf("\n");
    }

}


int main()
{

    struct Sparse s;
    create(&s);
    display(s);

    return 0;
}
