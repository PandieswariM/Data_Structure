/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int main()
{
    int n,i,j,s,flag=0;
    printf("Enter the Array size:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the %d element:\n",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter the searching element:\n");
    scanf("%d",&s);
    for(i=0;i<n;i++)
    {
        if(a[i]==s)
        {
            flag=1;
            printf("Element is found in position :%d",i+1);
            break;
        }
    }
    if(flag==0)
    printf("Element is not found");
}



