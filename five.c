#include <stdio.h>
int main()
{
    int a[4][4] = {
        10, 20, 30,40,
        40, 50, 60,70,
        70, 80, 90,90,
        10, 20, 40,50};
        int sum=0,n=4,k=n-1;
    for (int i = 0; i < n; i++)
    {
        if(k>=0)
            sum=sum+a[i][k];
            k--;
    }
    printf("Sum is %d",sum);
    return 0;
}