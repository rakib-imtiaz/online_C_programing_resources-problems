#include <stdio.h>
#include <stdlib.h>



int main()
{


    add();
menu();

    return 0;
}


void add ()
{
    int x;
    int y;
    printf("Enter X: \n");
    scanf("%d",&x);

    printf("Enter y: \n");
    scanf("%d",&y);

    int sum=x+y;

    printf("The sum is : %d",sum);





}


void menu()
{
    printf("1.PIzza\n");
    printf("2.Pasta\n");
    printf("3.Burger\n");

}


void print_star()
{
    printf("+\n");
    printf("+\n");
    printf("+\n");
    printf("+\n");
    printf("+\n");
    printf("+\n");


}
