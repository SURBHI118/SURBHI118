#include<stdio.h>
int main(){

    int a[5] = {45,22,100,66,37};
    int n = 5,i,j,t = 0;
    printf("SURBHI\n");
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if (a[i] < a[j])
            {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}

