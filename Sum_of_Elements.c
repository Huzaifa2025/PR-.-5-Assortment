//Q.3 Sum of Elements in Rows & Column of 2D Array
//Develop a program that print and finds Sum of Elements in  a
//given Rows & Column from a 2D Array.

#include<stdio.h>

int main()
{
    int i , j , row , col , row_num , col_num;
    int a[10][10];
    int sum1 = 0;
    int sum2 = 0;

    printf("Enter The Array's Row Size :- ");
    scanf("%d",&row);

    printf("Enter The Array's Column Size :- ");
    scanf("%d",&col);

    for(i=0 ; i<row ; i++)
    {
        for(j=0 ; j<col ; j++)
        {
            printf("a[%d][%d] :- ",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    printf("Enter Row Number :- ");
    scanf("%d",&row_num);

    if(row_num <= row)
    {
        printf("Element of Row %d :- ",row_num);
        for(j=0 ; j<col ;j++)
        {
            printf("%d ",a[j][row_num]);
            sum1 += a[j][row_num];
        }
    }
    printf("\n Sum of Row %d :- %d",row_num,sum1);
    printf("\n \n");

    //

    printf("Enter Column Number :- ");
    scanf("%d",&col_num);

    if(col_num <= col)
    {
        printf("Element of Column %d :- ",col_num);
        for(i=0 ; i<row ;i++)
        {
            printf("%d ",a[i][col_num]);
            sum2 += a[i][col_num];
        }
    }
    printf("\n Sum of column %d :- %d",col_num,sum2);
    printf("\n \n");


    return 0;
}