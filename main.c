#include <stdio.h>
#include <stdlib.h>

# define Max_Size 10
# define NUM 5

int main()
{
    while (1)
    {
        int streak=0,temp=0,cnt=0,Max=0,occ=0;
        int arr[Max_Size];
        printf("Please Enter the array:\n");


        for (cnt=0;cnt<Max_Size;cnt++)
        {
            scanf("%d",&arr[cnt]);
        }


        for (cnt=0;cnt<=Max_Size;cnt++)
        {
            if ((arr[cnt]==NUM) && (cnt<=Max_Size))
            {
            occ++;
            }
            else if (occ>Max)
            {
            Max=occ;
            occ=0;
            }
        }
        printf("Maximum occurrence=%d",Max);
        printf("\n\n\n");
    }
}
