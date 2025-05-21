//Q.2 Largest Elements in 2D Array
//Develop a program that finds all the Largest Elements from a given 2D Array.

#include<stdio.h>

int main()
{
    int i , j , large , row , col;
    int a[10][10];

    printf("Enter The Array's Row Size :- ");
    scanf("%d",&row);

    printf("Enter The Array's Column Size :- ");
    scanf("%d",&col);

    for(i=0 ; i<row ; i++)
    {
        for(j=0 ; j<col ; j++)
        {
            printf("Enter Array's Elements A[%d][%d] :- ",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    large = a[0][0];

    for(i=0 ; i<row ; i++)
    {
        for(j=0 ; j<col ; j++)
        {
            if(a[i][j] > large)
            {
                large = a[i][j];
            }
        }
    }

    printf("Large Element is :- %d",large);
    return 0;
}