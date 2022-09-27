#include <stdio.h>
int main()
{
  int array[100], n, c, d, position, t;
  printf("Enter the Array Size: ");
  scanf("%d", &n);
  printf("Enter %d integers: ", n);
  for (c = 0; c < n; c++)
    scanf("%d", &array[c]);
  for (c = 0; c < (n - 1); c++) 
  {
    position = c;
    for (d = c + 1; d < n; d++)
    {
      if (array[position] > array[d])
        position = d;
    }
    if (position != c)
    {
      t = array[c];
      array[c] = array[position];
      array[position] = t;
    }
  }
  printf("Sorted list in ascending order:\n");
  for (c = 0; c < n; c++)
    printf("%d ", array[c]);
  return 0;
}

/*output:
Enter the Array Size: 6
Enter 6 integers: 12 3 666 983 56 19
Sorted list in ascending order:
3 12 19 56 666 983 
*/