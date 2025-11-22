#include<stdio.h>
int main()
{
    int a, x;
    scanf("%d", &a);
    scanf("%d",&x);
    int arr[a];
    for(int i = 0; i<a; i++)
    {
        scanf("%d",&arr[i]);

    }

    int A = 0;
    for(int i = 0; i<a;i++)
    {
        if(arr[i]==x)
        {
            a = 1;
            break;
        }
        else 
        a = 0;
    }

    if(A==1)
    {
        printf("found");
    }

    else{
        printf("!found\n");
    }
}