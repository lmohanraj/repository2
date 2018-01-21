#include <stdio.h>
int main()
{
int n;
printf("enter the no of elements in the array");
scanf("%d",&n);
  int array[n], minimum, c;
 
  printf("Enter %d integers\n",n);
 
  for (c = 0; c <n; c++)
    scanf("%d", &array[c]);
 
  minimum = array[0];
 
  for (c = 1; c < n; c++)
  {
    if (array[c] < minimum)
    {
       minimum  = array[c];
    }
  }
 
  printf("Minimum element is  %d.\n", minimum);
  return 0;
}
