#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,i;
    printf("Enter the size of array:\n");
    scanf("%d",&N);
    int myArray[N],evenArray[N],oddArray[N];
    printf("Enter the elements of array:\n");
    for(i=0; i<N; i++)
    {

        scanf("%d",&myArray[i]);

    }
    printf("Odd elements of the array are:\n");
    for (i=0; i<N; i++)
    {
        if((myArray[i]%2)!=0)
        {

            printf("%d\n",myArray[i]);
        }
    }
    printf("Even elements of the array are:\n");
    for (i=0; i<N; i++)
    {
        if((myArray[i]%2)==0)
        {

            printf("%d\n",myArray[i]);
        }
    }
}
