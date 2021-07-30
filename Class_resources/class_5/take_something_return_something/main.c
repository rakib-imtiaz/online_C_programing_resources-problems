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

    int sum=add(x,y);
    sum=sum+10;

    printf("The sum is : %d",sum);
pow(2,3);


    return 0;
}




int add(int x,int y)
{

    int sum=x+y;

    return sum;


}
