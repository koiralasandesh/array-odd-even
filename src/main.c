#include <stdio.h>
#include <stdlib.h>

int main()
{
    while (true){
        int N,i;
        printf("Enter the size of array or 0 to exit:\n");
        scanf("%d",&N);
        if (N==0){
            break;
        }
        int myArray[N],evenArray[N],oddArray[N];
        printf("---------------------------------------------\n");
        printf("Enter Integers to the array:\n");
        for(i=0; i<N; i++)
        {

            scanf("%d",&myArray[i]);

        }
        printf("---------------------------------------------\n");
        printf("Odd Integers:\n");
        for (i=0; i<N; i++)
        {
            if((myArray[i]%2)!=0)
            {

                printf("%d\n",myArray[i]);
            }
        }
        printf("---------------------------------------------\n");
        printf("Even Integers:\n");
        for (i=0; i<N; i++)
        {
            if((myArray[i]%2)==0)
            {

                printf("%d\n",myArray[i]);
            }
        }
        printf("=============================================\n");
    }
    printf("====================END======================\n");
    
}
