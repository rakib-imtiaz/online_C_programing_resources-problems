#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int y;
    printf("Enter X: \n");
    scanf("%d",&x);

    printf("Enter y: \n");
    scanf("%d",&y);

    add(x,y)+10;




    return 0;
}

void add(int v,int x)
{
    int sum=0;

    sum=v+x;

    printf("The sum of x and y is :  %d",sum);


}
