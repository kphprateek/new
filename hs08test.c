#include<stdio.h>
 int main()
 {
     int x;
     float y,j;
     scanf("%d %f",&x,&y);
     if(x%5==0 && x+0.50<=y)
     {
         j=y-x-0.50;
         printf("%.2f",j);
     }
     else
     {
         printf("%.2f",y);
     }
     return 0;
 }
