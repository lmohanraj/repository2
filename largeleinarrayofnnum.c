 #include <stdio.h>
int main()
{
int n;
printf("enter the no of elements in the array");
scanf("%d",&n);
  int array[n], maximum, c;
 
  printf("Enter %d integers\n",n);
 
  for (c = 0; c <n; c++)
    scanf("%d", &array[c]);
 
  maximum = array[0];
 
  for (c = 1; c < n; c++)
  {
    if (array[c] > maximum)
    {
       maximum  = array[c];
    }
  }
 
  printf("Maximum element is  %d.\n", maximum);
  return 0;
}
