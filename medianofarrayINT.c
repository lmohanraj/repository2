#include<stdio.h>                          
  int main( )                                                     
   {                                                           
       int i,j,n;                                              
       int median,a[n],t;                                    
                                                               
       printf("Enter the number of items\n");                  
       scanf("%d", &n);                                        
       printf("Input %d values \n",n);                         
       for (i = 1; i <= n ; i++)                               
           scanf("%d", &a[i]);                                 
if ( n % 2 == 0)                                        
          median = (a[n/2] + a[n/2+1])/2.0 ;                   
       else                                                    
          median = a[n/2 + 1];                                 
                                                               
for (i = 1 ; i <= n ; i++)                              
           printf("%d ", a[i]);                               
       printf("\n\nMedian is %d\n", median);                   
        return 0;                                                       
   }    
                                         
