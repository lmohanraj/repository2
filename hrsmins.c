#include<stdio.h>
 int main()
 {
 	int m,hrs,min;
 	printf("enter the minutes");
 	scanf("%d",&m);
 	hrs=m/60;
 	min=m%60;
 	printf("%d hrs %d mins",hrs,min);
 	return 0;
 	
 }
