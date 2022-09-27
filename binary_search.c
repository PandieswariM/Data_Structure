/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int Search(int a[], int x, int low, int high) {
  if (high >= low) {
    int mid = (low + high) / 2;
    if (a[mid] == x)
      return mid;
    if (a[mid] > x)
      return Search(a, x, low, mid - 1);
    return Search(a, x, mid + 1, high);
  }

  return -1;
}
int main()
{
    int i,s,n,res;
    printf("Enter the Array size:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the %d Element in Ascending order:",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Enter the Searching Element:");
    scanf("%d",&s);
    res=Search(a,s,0,n-1);
    if(res==-1)
    printf("Element is not found");
    else
    printf("Element is found %d position\n",res+1);
}



