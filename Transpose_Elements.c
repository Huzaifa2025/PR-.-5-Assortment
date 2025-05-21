//Q.3 Transpose of 2D Array
//Develop a program that finds Transpose Matrix from a given 2D Array.

#include<stdio.h>

int main()
{
    int i , j , row , col;
    int a[10][10];

    printf("Enter The Array's Row Size :- ");
    scanf("%d",&row);

    printf("Enter The Array's Column Size :- ");
    scanf("%d",&col);

    for(i=0 ; i<row ; i++)
    {
        for(j=0 ; j<col ; j++)
        {
            printf("\n Enter Array's Elements :- ");
            printf("a[%d][%d] :- ",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    for(j=0 ; j<row ; j++)
    {
        for(i=0 ; i<col ; i++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    return 0;
}