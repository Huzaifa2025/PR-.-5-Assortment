//Q.1 Negative Elements in 1D Array
//Develop a program that finds all the Negative Elements from a given 1D Array.

#include<stdio.h>

int main()
{
    int size = 0;
    int a[size];
    int i ;

    printf("Enter The Array's Size :- ");
    scanf("%d",&size);

    for(i=0 ; i<size ; i++)
    {
        printf("\n Enter Array's Elements A[%d] :- " ,i);
        scanf("%d",&a[i]);
    }

   for(i=0 ; i<size ; i++)
    {
        if(a[i] < 0)
        {
            printf("\n Negative Elements From an Array:- %d ",a[i]);
        }    
    }

    return 0;
}