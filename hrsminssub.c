 #include<stdio.h>
 int main()
 {
 	int m,n,hrs1,min1,hrs2,min2;
 	printf("enter the hrs and mins\n");
 	scanf("%d%d",&hrs1,&min1);
 	printf("enter the hrs and mins\n");
	scanf("%d%d",&hrs2,&min2);
 	m=hrs1-hrs2;
 	n=min1-min2;
 	printf("\n%d hrs %d mins",m,n);
 	return 0;
 	
 }
