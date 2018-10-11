#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
    int a[6],i;
    srand(time(NULL));
    for(i=0;i<6;i++)
    {
        a[i]=rand()%10;
    }
    for(i=0;i<6;i++)
    printf("%d  ",a[i]);
    return 0;
}
