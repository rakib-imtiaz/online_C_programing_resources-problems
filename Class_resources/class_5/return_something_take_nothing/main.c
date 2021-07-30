#include <stdio.h>
#include <stdlib.h>

int main()
{



   int sum=add();
   sum=sum+10;

   printf("The sum is : %d",sum);



    return 0;
}


int add ()
{
    int x;
    int y;
    printf("Enter X: \n");
    scanf("%d",&x);

    printf("Enter y: \n");
    scanf("%d",&y);

    int sum=x+y;

    return sum;




}


int pi_generate()
{

return 22/7;


}
